#!/bin/bash

check_ret() {
    if [ $1 -ne 0 ]; then
        echo ""
        echo "!!! FAIL: $2"
        echo "********************************************************************************"
        echo ""
        exit $1
    else
        echo ""
        echo "*** SUCCESS: $2"
        echo "********************************************************************************"
        echo ""
    fi
}

cd Python-3.10.1

export CFLAGS="$CFLAGS -fPIC"
./configure \
   --enable-optimizations \
   --prefix=`pwd`/../python-bin-linux \
   --with-static-libpython
check_ret $? "Configure python"

make install
check_ret $? "Build python"

mkdir -p `pwd`/../../../../../bin/Python3Home/lib
cp -rf `pwd`/../python-bin-linux/lib/python3.10 `pwd`/../../../../../bin/Python3Home/lib/python3.10