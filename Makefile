main=conv
exec=$(main)
 infile=sound/square-left.wav sound/square-left.wav
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
	$(cc) $(opts) $(main).c lib/*.c -o $(exec)

full:
	cat include/*.h include/*.c $(main).c | sed "/#include \".*\"/d;/infoWav/d" > $(main)-full.c

clean:
	rm -f *.o out.wav img/out.png
	rm -f $(exec)

headers:
	sed -i "/SIGNATURES/,$$ d" $(target).h
	echo "//SIGNATURES" >> $(target).h
	grep "^\S* .*(" $(target).c | tr "{" ";" >> $(target).h
	echo '#endif //_$(shell tr "[:lower:]" "[:upper:]" <<< "$(target)" )_H' >> $(target).h
