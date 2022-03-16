/* Author: Matteo Gianferrari
 * Data: 15/03/2022
 * La funzione lavora con file binari in cui ogni vettore e' salvato come:
 * 1. un intero senza segno a 8 bit che contiene il numero di elementi del vettore
 * 2. x numeri in virgola mobile a 64 bit in little endian, codificati secondo il fomrato IEEE 754
 * La funzione accetta un puntatore a file aperto in modalita' lettura binaria e un puntatore ad una struct vettore e deve
 * leggere il prossimo vettore contenuto nel file. La funzione ritorna 1 se e' riuscita a leggere un intero vettore correttamente,
 * 0 altrimenti. In particolare vettore_leggi ritorna 0 se raggiunge la fine del file prima di aver letto interamente il vettore.
 */
#include <stdio.h>
#include <stdlib.h>
#include "vettori.h"

int main(void){
	FILE *f;
	struct vettore v = {0, NULL};
	int n = 0;

	f = fopen("vettori3.bin", "rb");
	
	while((vettore_leggi(f, &v)) != 0){
		printf("%u\n", v.size);
		
		for(n = 0; n < v.size; n++)
			printf("%x\t", v.data[n]);	
		putchar('\n');
		
		v.size = 0;
		free(v.data);
	}
	
	fclose(f);
	
	return 0;
}
