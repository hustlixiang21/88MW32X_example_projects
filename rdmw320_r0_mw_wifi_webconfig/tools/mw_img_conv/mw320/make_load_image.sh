#!/bin/bash

if [ "$#" -ne 3 ] ; then
  echo "Usage: $0 <input_axf_file> <output_load_image> <mcufw_image_address>"
  exit 1
fi

BOOT2_DIR=../../boot2


path=`dirname $1`
name=`basename $1 .axf`
basepath=$path/$name

arm-none-eabi-objcopy -v -O binary $1 $basepath.bin
addr=`head -c8 $basepath.bin | od -An -t x1 -j7 | xargs`
entry_point=0x`head -c8 $basepath.bin | od -An -t x4 -j4 | xargs`

if [[ "$addr" == "1f" ]]; then
    echo "Program is linked to FLASH with entry point $entry_point. Building $(basename $2)"

	./mkimg.sh $basepath.bin
	
	arm-none-eabi-objcopy $basepath.fw.bin $2 -I binary -O elf32-littlearm -S \
		--rename-section .data=.mcufw --change-section-address .data=$3 \
		--add-section .boot2=$BOOT2_DIR/boot2.bin --change-section-address .boot2=0x1f000000 \
		--add-section .layout=$BOOT2_DIR/layout.bin --change-section-address .layout=0x1f004000 \
		--set-section-flags .*=contents,alloc,load,data --set-start $entry_point
else
    echo "Program is linked to RAM. Copy $(basename $1) to $(basename $2)"
    cp $1 $2
fi
