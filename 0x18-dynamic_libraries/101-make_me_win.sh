#!/bin/bash
curl -O https://raw.githubusercontent.com/shrn-kira/alx-low_level_programming/master/0x18-dynamic_libraries/libmask.so
export LD_PRELOAD=./libmask.so
