
DTC ?= dtc
CPP ?= cpp
KERNEL_VERSION ?= $(shell uname -r)

DTCVERSION = $(shell $(DTC) --version | grep ^Version | sed 's/^.* //g')

# Disable noisy checks by default
ifeq ($(findstring 1,$(DTC_VERBOSE)),)
DTC_FLAGS += -Wno-unit_address_vs_reg \
        -Wno-unit_address_format \
        -Wno-avoid_unnecessary_addr_size \
        -Wno-alias_paths \
        -Wno-graph_child_address \
        -Wno-simple_bus_reg \
        -Wno-unique_unit_address \
        -Wno-pci_device_reg
endif

ifneq ($(findstring 2,$(DTC_VERBOSE)),)
DTC_FLAGS += -Wnode_name_chars_strict \
        -Wproperty_name_chars_strict
endif

ifeq "$(DTCVERSION)" "1.6.1"
DTC_FLAGS += -Wno-interrupt_provider
endif

MAKEFLAGS += -rR --no-print-directory

ALL_ARCHES := $(patsubst src/%,%,$(wildcard src/*))

PHONY += all
all: $(foreach i,$(ALL_ARCHES),all_$(i))

PHONY += clean
clean: $(foreach i,$(ALL_ARCHES),clean_$(i))

PHONY += install
install: $(foreach i,$(ALL_ARCHES),install_$(i))

# Do not:
# o  use make's built-in rules and variables
#    (this increases performance and avoids hard-to-debug behaviour);
# o  print "Entering directory ...";
MAKEFLAGS += -rR --no-print-directory

# To put more focus on warnings, be less verbose as default
# Use 'make V=1' to see the full commands

ifeq ("$(origin V)", "command line")
  KBUILD_VERBOSE = $(V)
endif
ifndef KBUILD_VERBOSE
  KBUILD_VERBOSE = 0
endif

# Beautify output
# ---------------------------------------------------------------------------
#
# Normally, we echo the whole command before executing it. By making
# that echo $($(quiet)$(cmd)), we now have the possibility to set
# $(quiet) to choose other forms of output instead, e.g.
#
#         quiet_cmd_cc_o_c = Compiling $(RELDIR)/$@
#         cmd_cc_o_c       = $(CC) $(c_flags) -c -o $@ $<
#
# If $(quiet) is empty, the whole command will be printed.
# If it is set to "quiet_", only the short version will be printed. 
# If it is set to "silent_", nothing will be printed at all, since
# the variable $(silent_cmd_cc_o_c) doesn't exist.
#
# A simple variant is to prefix commands with $(Q) - that's useful
# for commands that shall be hidden in non-verbose mode.
#
#       $(Q)ln $@ :<
#
# If KBUILD_VERBOSE equals 0 then the above command will be hidden.
# If KBUILD_VERBOSE equals 1 then the above command is displayed.

ifeq ($(KBUILD_VERBOSE),1)
  quiet =
  Q =
else
  quiet=quiet_
  Q = @
endif

# If the user is running make -s (silent mode), suppress echoing of
# commands

ifneq ($(filter 4.%,$(MAKE_VERSION)),)	# make-4
ifneq ($(filter %s ,$(firstword x$(MAKEFLAGS))),)
  quiet=silent_
endif
else					# make-3.8x
ifneq ($(filter s% -s%,$(MAKEFLAGS)),)
  quiet=silent_
endif
endif

export quiet Q KBUILD_VERBOSE

all_%:
	$(Q)$(MAKE) ARCH=$* all_arch

clean_%:
	$(Q)$(MAKE) ARCH=$* clean_arch

install_arm:
	$(Q)$(MAKE) ARCH=arm install_arch_arm

install_arm64:
	$(Q)$(MAKE) ARCH=arm64 install_arch_arm64

ifeq ($(ARCH),)

ALL_DTS		:= $(shell find src/* -name \*.dts)

ALL_DTB		:= $(patsubst %.dts,%.dtb,$(ALL_DTS))

$(ALL_DTB): ARCH=$(word 2,$(subst /, ,$@))
$(ALL_DTB): FORCE
	$(Q)$(MAKE) ARCH=$(ARCH) $@

# DT overlays
ALL_DTS_OVERLAYS	:= $(shell find src/*/overlays -name \*.dts)
ALL_DTB_OVERLAYS	:= $(patsubst %.dtbo,%.dtb,$(ALL_DTS))
$(ALL_DTB_OVERLAYS): ARCH=$(word 2,$(subst /, ,$@))
$(ALL_DTB_OVERLAYS): FORCE
	$(Q)$(MAKE) ARCH=$(ARCH) $@

else

ARCH_DTS	:= $(shell find src/$(ARCH) -name \*.dts)

ARCH_DTB	:= $(patsubst %.dts,%.dtb,$(ARCH_DTS))

src	:= src/$(ARCH)
obj	:= src/$(ARCH)

include scripts/Kbuild.include

cmd_files := $(wildcard $(foreach f,$(ARCH_DTB),$(dir $(f)).$(notdir $(f)).cmd))

ifneq ($(cmd_files),)
  include $(cmd_files)
endif

# Overlays
ARCH_DTS_OVERLAYS	:= $(shell find src/$(ARCH)/overlays -name \*.dts)
ARCH_DTB_OVERLAYS	:= $(patsubst %.dts,%.dtbo,$(ARCH_DTS_OVERLAYS))
src_overlays		:= src/$(ARCH)/overlays
obj_overlays		:= src/$(ARCH)/overlays
cmd_files_overlays 	:= $(wildcard $(foreach f,$(ARCH_DTB_OVERLAYS),$(dir $(f)).$(notdir $(f)).cmd))

ifneq ($(cmd_files_overlays),)
  include $(cmd_files_overlays)
endif

$(obj_overlays)/%.dtbo: $(src_overlays)/%.dts FORCE
	$(call if_changed_dep,dtc)

quiet_cmd_clean    = CLEAN   $(obj) & $(obj_overlays)
      cmd_clean    = rm -f $(__clean-files)

dtc-tmp = $(subst $(comma),_,$(dot-target).dts.tmp)

dtc_cpp_flags  = -Wp,-MD,$(depfile).pre.tmp -nostdinc		\
                 -Iinclude -I$(src) -Isrc -Itestcase-data	\
                 -undef -D__DTS__

quiet_cmd_dtc = DTC     $@
cmd_dtc = $(CPP) $(dtc_cpp_flags) -x assembler-with-cpp -o $(dtc-tmp) $< ; \
        $(DTC) -O dtb -o $@ -b 0 -@ \
                -i $(src) $(DTC_FLAGS) \
                -d $(depfile).dtc.tmp $(dtc-tmp) ; \
        cat $(depfile).pre.tmp $(depfile).dtc.tmp > $(depfile)

$(obj)/%.dtb: $(src)/%.dts FORCE
	$(call if_changed_dep,dtc)

PHONY += all_arch
all_arch: $(ARCH_DTB) $(ARCH_DTB_OVERLAYS)
	@:

PHONY += install_arch_arm
install_arch_arm: $(ARCH_DTB) $(ARCH_DTB_OVERLAYS)
	# install Device Tree
	mkdir -p /boot/dtbs/$(KERNEL_VERSION)/overlays/
	cp -v src/arm/ti/omap/*.dtb /boot/dtbs/$(KERNEL_VERSION)/ || true
	cp -v src/arm/overlays/*.dtbo /boot/dtbs/$(KERNEL_VERSION)/overlays || true

PHONY += install_arch_arm64
install_arch_arm64: $(ARCH_DTB) $(ARCH_DTB_OVERLAYS)
	# install Device Tree
	mkdir -p /boot/dtbs/$(KERNEL_VERSION)/ti/overlays/
	cp -v src/arm64/ti/*.dtb /boot/dtbs/$(KERNEL_VERSION)/ti/ || true
	cp -v src/arm64/overlays/*.dtbo /boot/dtbs/$(KERNEL_VERSION)/ti/overlays/ || true
	cp /boot/dtbs/$(KERNEL_VERSION)/ti/k3-*.dtb /boot/firmware/ || true
	cp /boot/dtbs/$(KERNEL_VERSION)/ti/overlays/*.dtbo /boot/firmware/overlays/ || true

RCS_FIND_IGNORE := \( -name SCCS -o -name BitKeeper -o -name .svn -o -name CVS \
                   -o -name .pc -o -name .hg -o -name .git \) -prune -o

PHONY += clean_arch
clean_arch: __clean-files = $(ARCH_DTB) $(ARCH_DTB_OVERLAYS)
clean_arch: FORCE
	$(call cmd,clean)
	@find . $(RCS_FIND_IGNORE) \
		\( -name '.*.cmd' \
		-o -name '.*.d' \
		-o -name '.*.tmp' \
		\) -type f -print | xargs rm -f

endif

help:
	@echo "Targets:"
	@echo "  all:                   Build all device tree binaries for all architectures"
	@echo "  clean:                 Clean all generated files"
	@echo "  install:               Install all generated files (sudo)"
	@echo ""
	@echo "  all_<ARCH>:            Build all device tree binaries for <ARCH>"
	@echo "  clean_<ARCH>:          Clean all generated files for <ARCH>"
	@echo "  install_<ARCH>:        Install all generated files for <ARCH> (sudo)"
	@echo ""
	@echo "  src/<ARCH>/<DTS>.dtb   Build a single device tree binary"
	@echo ""
	@echo "Architectures: $(ALL_ARCHES)"

PHONY += FORCE
FORCE:

.PHONY: $(PHONY)
