# merge hints

# linux-next bindings:
```
rsync -av  ~/linux-next/Documentation/devicetree/bindings/ ./Bindings/ --delete
```

# my tree
```
meld include/dt-bindings/ ../arm64-multiplatform-k3/KERNEL/include/dt-bindings/
meld src/arm/ti/omap/ ../arm64-multiplatform-k3/KERNEL/arch/arm/boot/dts/ti/omap/
meld src/arm64/ti/ ../arm64-multiplatform-k3/KERNEL/arch/arm64/boot/dts/ti/
meld src/riscv/ ../arm64-multiplatform-k3/KERNEL/arch/riscv/boot/dts/
```

# linux
```
meld include/dt-bindings/ ~/linux-src/include/dt-bindings/
meld src/arm/ti/omap/ ~/linux-src/arch/arm/boot/dts/ti/omap/
meld src/arm64/ti/ ~/linux-src/arch/arm64/boot/dts/ti/
meld src/riscv/ ~/linux-src/arch/riscv/boot/dts/
```

# linux-next
```
meld include/dt-bindings/ ~/linux-next/include/dt-bindings/
meld src/arm/ti/omap/ ~/linux-next/arch/arm/boot/dts/ti/omap/
meld src/arm64/ti/ ~/linux-next/arch/arm64/boot/dts/ti/
meld src/riscv/ ~/linux-next/arch/riscv/boot/dts/
```
