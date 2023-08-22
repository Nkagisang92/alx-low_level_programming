#!/bin/bash
wget -P /tmp https://github.com/nkagisanggoeieman/alx/raw/master/0x18-Dynamic-libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
