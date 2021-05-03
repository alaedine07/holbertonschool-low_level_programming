#!/usr/bin/bash
wget -P /tmp https://github.com/alaedine07/holbertonschool-low_level_programming/raw/main/0x18-dynamic_libraries/fake.so
export LD_PRELOAD="/tmp/fake.so"
