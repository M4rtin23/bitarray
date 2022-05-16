DIR = /usr/local/
all: bitarray.so

bitarray.so: bitarray.c
	gcc -shared bitarray.c -o bitarray.so

install: bitarray.so
	cp bitarray.so ${DIR}lib/
	cp bitarray.h ${DIR}include

uninstall:
	rm -f ${DIR}lib/bitarray.so
	rm -f ${DIR}include/bitarray.h

clean:
	rm -f *.so *.o
