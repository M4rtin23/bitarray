all:
	gcc -c bitarray.c
	gcc -shared bitarray.o -o bitarray.so
	cp bitarray.so /usr/lib/
	cp bitarray.h /usr/include

clean:
	rm -f *.so *.o
