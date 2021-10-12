#!/bin/bash

#let us say I have a LED connected to RPi GPIO17
GPIO="$1"
# variable that catches the entered arg[0] from the command line
# when running this script I have to write the pin number which will be toggled every second.

SYS=/sys/class/gpio
DEV=/sys/class/gpio/gpio$GPIO

if [ ! -d $DEV ] ; then
   # Make pin visible
   echo $GPIO >$SYS/export
fi

# Set pin to output
echo out >$DEV/direction

function setPin() {
    # Set value of pin (1 or 0)
    echo $1 >$DEV/value
}

# Main loop
while true ; do
# or while [ 1 ] ; do
    setPin 1
    echo "GPIO $GPIO is turned on!"
    sleep 1
    setPin 0
    echo "GPIO $GPIO is turned off! $(date)"
    sleep 1
done
