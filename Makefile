exec=vol
infile=sound/rect.wav
outfile=out.wav

default:
	make build
	make test

test:
	./$(exec) $(infile) $(outfile)

build:
	tcc -g *.c -o $(exec)

debug:
	./$(exec) test.wav out.wav || gdb $(exec) core

clean:
	rm *.o
	rm $(exec)

h:
	sed -i "/SIGNATURES/,$$ d" $n.h
	echo "//SIGNATURES" >> $n.h
	grep "^\S* .*(" $n.c | tr "{" ";" >> $n.h
	echo '#endif //_$(shell tr "[:lower:]" "[:upper:]" <<< "$n" )_H' >> $n.h
