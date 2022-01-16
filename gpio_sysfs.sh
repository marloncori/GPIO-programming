#!/bin/bash

#For examaple, if you want to read the value of GPIO 72 without setting its direction, try
#
#> gpio.sh 72
#
#If you want to force GPIO 35 to be in input and read the current value, try
#
#> gpio.sh 35 in
#
#If you want to configure GPIO 4 to be an output and set the value high, try
#
#> gpio.sh 4 out 1 

show_usage()
{
    printf "\ngpio.sh <gpio pin number> [in|out [<value>]]\n"
}

if [ \( $# -eq 0 \) -o \( $# -gt 3 \) ] ; then
    show_usage
    printf "\n\nERROR: incorrect number of parameters\n"
    exit 255
fi

#doesn't hurt to export a gpio more than once
echo $1 > /sys/class/gpio/export

if [  $# -eq 1 ] ; then
   cat /sys/class/gpio/gpio$1/value
   exit 0
fi

if [ \( "$2" != "in" \) -a  \( "$2" != "out" \) ] ; then
    show_usage
    printf "\n\nERROR: second parameter must be 'in' or 'out'\n"
    exit 255
fi

echo $2 > /sys/class/gpio/gpio$1/direction

if [  $# -eq 2 ] ; then
   cat /sys/class/gpio/gpio$1/value
   exit 0
fi


VAL=$3

if [ $VAL -ne 0 ] ; then
    VAL=1
fi

echo $VAL > /sys/class/gpio/gpio$1/value
