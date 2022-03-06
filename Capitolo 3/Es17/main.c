#include <stdio.h>
#include "capsula.h"

int main(void){
	unsigned char i;
	
	for(i = 1; i < 10; i++)
		capsula(stdout, i);

	return 0;
}
