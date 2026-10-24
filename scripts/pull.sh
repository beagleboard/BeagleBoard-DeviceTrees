#!/bin/bash

branch="v7.0.x"

git pull --no-edit https://github.com/beagleboard/BeagleBoard-DeviceTrees.git ${branch}
git pull --no-edit https://openbeagle.org/beagleboard/BeagleBoard-DeviceTrees.git ${branch}

