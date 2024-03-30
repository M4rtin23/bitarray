#include "bitarray.h"

int bit_value(bitarray array, int index){
	return ((array >> index) & 1);
}

void assign_value(bitarray *array, int index, char value){
	if(value){
		*array = *array | (1<<index);
	}else{
		*array = *array & ~(1<<index);
	}
}

void print_bitarray(bitarray array){
	for(int i = 7; i >= 0; i--){
		printf("%i", bit_value(array, i));
	}
}
void print_hexadecimal(bitarray array){
	for(int i = 1; i >= 0; i--){
		if(((array>>i*4) & 15) > 9){
			switch((array>>i*4) & 15){
				case 10:
					printf("A");
					break;
				case 11:
					printf("B");
					break;
				case 12:
					printf("C");
					break;
				case 13:
					printf("D");
					break;
				case 14:
					printf("E");
					break;
				case 15:
					printf("F");
					break;
			}
		}else{
			printf("%d", (array>>i*4) & 15);
		}
	}
}

void to_array(bitarray bitarray, char* array){
	for(int i = 0; i < 8; i++){
		array[i] = bit_value(bitarray, i);
	}
}
