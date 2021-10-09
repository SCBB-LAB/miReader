#!/bin/bash
qmake-qt4
make
EMBOSS/configure
make
make install
rm -rf ajax/ doc/ emboss/ jemboss/ nucleus/ plplot/ test/ config.log tre.spec libtool config.status Makefile
