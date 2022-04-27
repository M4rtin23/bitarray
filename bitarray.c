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
