#!/bin/bash

# let us suppose the input pin is 25
# and the output pin is 17
# active sense: 0=active high, 1=active low (default 0)
# when running this script write like this ./input 25 17 0

INPUT="${1:-25}" # read from GPIO25 (GEN6)
OUTPUT="${2:-17}" # write to GPIO17 (GEN5)
ACT_LOW="${3:-0}"  # 1 = active low, else 0
# arguments

set -eu
trap "close_all" 0

function close_all() {
   close $INPUT
   close $OUTPUT
}

function open() {
    devel=$SYS/gpio$1
    if [ ! -d $devel ] ; then
       echo $1 >$SYS/export
    fi
    echo $2 >$devel/direction
    echo none >$devel/edge
    # or rising, falling, both
    echo $ACT_LOW >$devel/active_low
}

function close() { # pin
    echo $1 >$SYS/unexport
}

function set_val() {
    echo $2 >$SYS/gpio$1/value
}

function get_pin() {
    read BIT <$SYS/gpio$1/value
    echo $BIT
}

count=0
SYS=/sys/class/gpio

open $INPUT in
open $OUTPUT out
set_val $OUTPUT 1
LBIT=2

while true ; do
  RBIT=$(get_pin $INPUT)
  if [ $RBIT -ne $LBIT ] ; then
     set_val $OUTPUT $RBIT
     printf "%04d Status: %d\n" $count $RBIT
     LBIT=$RBIT
     let count=count+1
  else
     sleep 2
  fi
done
