main=fir
exec=$(main)
infile=sound/sin.wav
outfile=out.wav

default:
	make build
	make test

test:
	rm -f out*
	./$(exec) $(infile) $(outfile)
	./plot $(outfile)

build:
	tcc -g $(main).c include/*.c -o $(exec)

debug:
	./$(exec) test.wav out.wav || gdb $(exec) core

clean:
	rm *.o *.png
	rm $(exec)

h:
	sed -i "/SIGNATURES/,$$ d" $n.h
	echo "//SIGNATURES" >> $n.h
	grep "^\S* .*(" $n.c | tr "{" ";" >> $n.h
	echo '#endif //_$(shell tr "[:lower:]" "[:upper:]" <<< "$n" )_H' >> $n.h
