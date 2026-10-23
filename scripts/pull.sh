#!/bin/bash

branch="v6.15.x"

git pull --no-edit https://github.com/beagleboard/BeagleBoard-DeviceTrees.git ${branch}
git pull --no-edit https://openbeagle.org/beagleboard/BeagleBoard-DeviceTrees.git ${branch}

