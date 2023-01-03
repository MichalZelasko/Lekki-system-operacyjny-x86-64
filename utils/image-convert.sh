#!/bin/bash
# $1 - bgr image path
# $2 - header file name
# $3 - image width in pixels
# $4 - image height in pixels

echo "#ifndef ${2^^}_H"             >  "$2.h"
echo "#define ${2^^}_H"             >> "$2.h"
echo "#include <types.h>"           >> "$2.h"
echo ""                             >> "$2.h"
echo "uint8_t $2[$3 * $4 * 3] = {"  >> "$2.h"
hexdump -v -e '16/1 "0x%x,""\n"' $1 >> "$2.h"
echo "};"                           >> "$2.h"
echo "#endif"                       >> "$2.h"
echo ""                             >> "$2.h"
