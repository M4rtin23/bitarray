all: bitarray.so

bitarray.so:
	gcc -shared bitarray.c -o bitarray.so

install: bitarray.so
	cp bitarray.so /usr/lib/
	cp bitarray.h /usr/include

uninstall:
	rm -f /usr/lib/bitarray.so
	rm -f /usr/include/bitarray.h	

clean:
	rm -f *.so *.o
