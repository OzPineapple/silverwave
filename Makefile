main=conv
exec=$(main)
 #infile=sound/sqrt.wav sound/sqrt.wav
 infile=sound/square.wav sound/square.wav
 #infile=delta-train.wav sound/square.wav 
 #infile=delta-train.wav delta-train.wav
 #infile=sound/cos62.5.hex.5.wav
 #infile=sound/delta-train.wav
outfile=out.wav
cc=gcc
opts=-lm -g

default:
	make clean
	make build
	make test

test:
	rm -f out* img/out.png
	./$(exec) $(infile) $(outfile)
	./plot $(outfile)

s=1

testconv:
	sox -r 44000 -b 16 -c 1 -n square.wav synth $s square $s 50
	rm -f out.wav
	./conv square.wav square.wav out.wav
	./plot square.wav
	./plot out.wav

build:
	$(cc) $(opts) $(main).c include/*.c -o $(exec)

full:
	cat include/*.h include/*.c $(main).c | sed "/#include \".*\"/d;/infoWav/d" > $(main)-full.c

debug:
	./$(exec) test.wav out.wav || gdb $(exec) core

clean:
	rm -f *.o out.wav img/out.png
	rm -f $(exec)

h:
	sed -i "/SIGNATURES/,$$ d" $n.h
	echo "//SIGNATURES" >> $n.h
	grep "^\S* .*(" $n.c | tr "{" ";" >> $n.h
	echo '#endif //_$(shell tr "[:lower:]" "[:upper:]" <<< "$n" )_H' >> $n.h
