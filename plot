#!/bin/bash
sox $1 -t dat - | tail -n+3 > dat.dat
filename=$(basename $1 .wav)
echo -e 'set term png size 900,700\nset output "'$filename'-plot.png"\nplot "dat.dat" with lines' > script.gpi
gnuplot script.gpi
rm script.gpi dat.dat
sxiv $filename-plot.png &
