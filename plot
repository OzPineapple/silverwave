#!/bin/bash

cache=.cache/gnuplot
config=.config/gnuplot
filename=$(basename $1 .wav)

rm -f $cache/* img/*

sox $1 -t dat $cache/dat.dat
cha=$(sed -n "2p" $cache/dat.dat | rev );
cha=${cha:1:1}

tail -n+3 $cache/dat.dat > $cache/aux.dat
mv $cache/aux.dat $cache/dat.dat

if [[ "$cha" == "2" ]];
then
	sed "s/ \\+/\\t/g" $cache/dat.dat > $cache/aux.dat

	i=0
	for l in `cut -f 3 $cache/aux.dat`; do
		printf "%f\t%f\n" $i $l >> $cache/dat-1.dat
		i=$((i+1))
	done
	tmp=`sed "s/\\//\\\\\\\\\//g" <<< "${cache}/dat-1.dat"`
	sed "s/<name>/${filename}-1/g;s/<color>/blue/g;s/<dat>/${tmp}/g;s/<style>/impulses/g" $config/script.gpi > $cache/script.gpi
	gnuplot $cache/script.gpi

	i=0
	for l in `cut -f 4 $cache/aux.dat`; do
		printf "%f\t%f\n" $i $l >> $cache/dat-2.dat
		i=$((i+1))
	done
	tmp=`sed "s/\\//\\\\\\\\\//g" <<< "${cache}/dat-2.dat"`
	sed "s/<name>/${filename}-2/g;s/<color>/red/g;s/<dat>/${tmp}/g;s/<style>/impulses/g" $config/script.gpi > $cache/script.gpi
	gnuplot $cache/script.gpi

	convert ${filename}-1.png ${filename}-2.png -append ${filename}.png

	mv ${filename}.png img
	rm $cache/aux.dat ${filename}*.png 
	sxiv img/$filename.png &
	exit 0
fi

tmp=`sed "s/\\//\\\\\\\\\//g" <<< "${cache}/dat.dat"`
sed "s/<name>/${filename}/g;s/<color>/blue/g;s/<dat>/${tmp}/g;s/<style>/lines/g" $config/script.gpi > $cache/script.gpi
gnuplot $cache/script.gpi
mv $filename.png img
sxiv img/$filename.png &
