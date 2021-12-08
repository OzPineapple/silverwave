#!/bin/bash
sox $1 -t dat dat.dat

filename=$(basename $1 .wav)
rm -f img/$filename.png
cha=$(sed -n "2p" dat.dat | rev );
cha=${cha:1:1}
tail -n+3 dat.dat > aux.dat
mv aux.dat dat.dat

if [[ "$cha" == "2" ]];
then
	sed "s/ \\+/\\t/g" dat.dat > aux.dat
	cut -f 2,3 aux.dat > dat1.dat
	cut -f 2,4 aux.dat > dat2.dat
	rm aux.dat
	echo 'set term png size 900,700' > script.gpi
	echo 'set title "'$filename'"' >> script.gpi
	echo 'set grid' >> script.gpi
	echo 'set yrange [-1.5:1.5]' >> script.gpi
	echo -e 'set output "'$filename'1.png"' >> script.gpi
	echo 'set style line 1 lw 3 lc "blue"' >> script.gpi
	echo 'plot "dat1.dat" title "'$filename'" with line ls 1' >> script.gpi
	gnuplot script.gpi
	echo 'set term png size 900,700' > script.gpi
	echo 'set title "'$filename'"' >> script.gpi
	echo 'set grid' >> script.gpi
	echo 'set yrange [-1.5:1.5]' >> script.gpi
	echo -e 'set output "'$filename'2.png"' >> script.gpi
	echo 'set style line 1 lw 3 lc "red"' >> script.gpi
	echo 'plot "dat2.dat" title "'$filename'" with line ls 1' >> script.gpi
	gnuplot script.gpi
	convert $filename"1.png" $filename"2.png" -append $filename.png
	mv $filename.png img
	rm script.gpi dat.dat dat1.dat dat2.dat $filename"1.png" $filename"2.png"
	sxiv img/$filename.png &
	exit 0
fi

echo 'set term png size 900,700' > script.gpi
echo 'set title "'$filename'"' >> script.gpi
echo 'set grid' >> script.gpi
echo 'set yrange [-1.5:1.5]' >> script.gpi
echo -e 'set output "'$filename'.png"' >> script.gpi
echo 'set style line 1 lw 3 lc "blue"' >> script.gpi
echo 'plot "dat.dat" title "'$filename'" with line ls 1' >> script.gpi
gnuplot script.gpi
rm script.gpi dat.dat
mv $filename.png img
sxiv img/$filename.png &
