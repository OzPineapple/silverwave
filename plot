#!/bin/bash
sox $1 -t dat - | tail -n+3 > dat.dat
filename=$(basename $1 .wav)
echo 'set term png size 900,700' > script.gpi
echo 'set title "'$filename'"' >> script.gpi
echo 'set grid' >> script.gpi
echo 'set yrange [-2:2]' >> script.gpi
echo -e 'set output "'$filename'.png"' >> script.gpi
echo 'set style line 1 lw 3 lc "blue"' >> script.gpi
echo 'plot "dat.dat" title "'$filename'" with line ls 1' >> script.gpi
gnuplot script.gpi
rm script.gpi dat.dat
mv $filename.png img
sxiv img/$filename.png &
