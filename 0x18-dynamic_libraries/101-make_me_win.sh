#!/bin/bash
wget -P /tmp/ https://raw.github.com/error-rgl/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/libinject.so
export LD_PRELOAD=/tmp/libinject.so
