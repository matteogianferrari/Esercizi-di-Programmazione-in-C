/* Author: Matteo Gianferrari
 * Data: 04/03/2022
 * Implementare la funzione che accetta un numero intero x e deve riempire la stringa C all'indirizzo sz con la rappresentazione binaria di x a n bit 
 * in formato testo. Il puntatore sz punta ad un'area di memoria gia' allocata e grande a sufficienza per contenere n caratteri piu' il terminatore.
 */
#include <stdio.h>
#include <stdlib.h>
#include "conversione.h"

#define MAX_LEN 100

void main_test(unsigned int x, size_t n){
	char s[MAX_LEN];
	
	itob(x, s, n);
	printf("x = %d in n = %d bit: itob() ha ritornato la stringa \"%s\".\n", x, n, s);
}

int main(void){
	main_test(0, 8);
	main_test(1, 8);
	main_test(10, 8);
	main_test(100, 8);
	
	main_test(0x7f, 8);
	main_test(0x7fff, 16);
	main_test(0x7fffffff, 32);
	
	main_test(0xff, 8);
	main_test(0xffff, 16);
	main_test(0xffffffff, 32);
	
	return 0;
}
