main=conv
exec=$(main)
 infile=sound/sqrt.wav sound/sqrt.wav
 #infile=sound/square.wav sound/square.wav
 #infile=sound/cos62.5.hex.5.wav
outfile=out.wav
cc=tcc
opts=-lm -g

default:
	make clean
	make build
	make test

test:
	rm -f out* img/out.png
	./$(exec) $(infile) $(outfile)
	./plot $(outfile)

build:
	$(cc) $(opts) $(main).c include/*.c -o $(exec)

debug:
	./$(exec) test.wav out.wav || gdb $(exec) core

clean:
	rm -f *.o
	rm -f $(exec)

h:
	sed -i "/SIGNATURES/,$$ d" $n.h
	echo "//SIGNATURES" >> $n.h
	grep "^\S* .*(" $n.c | tr "{" ";" >> $n.h
	echo '#endif //_$(shell tr "[:lower:]" "[:upper:]" <<< "$n" )_H' >> $n.h
