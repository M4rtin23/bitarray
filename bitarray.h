typedef unsigned char bitarray;

extern int bit_value(bitarray, int);

extern void assign_value(bitarray*, int, char);

extern int printf (const char *__restrict __format, ...);

extern void print_bitarray(bitarray);

extern void print_hexadecimal(bitarray);

extern void to_array(bitarray bitarray, char* array);
