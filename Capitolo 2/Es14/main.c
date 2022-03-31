/* Author: Matteo Gianferrari
 * Data: 25/02/2022
 * Implementare la funzione che accetta come parametro values, un puntatore ad una zona di memoria contenente un vettore di double,
 * un dato di tipo size_t che ne indica la dimensione n e un puntatore a un file binario. La funzione deve scrivere sul file ogni 
 * valore in formato binario come questo e' rappresentato in memoria. Se values e' NULL o n = 0, la funzione non invia nulla in output.
 */ 
#include <stdlib.h>
#include <stdio.h>

int main(void){
	FILE *f;
	double v[] = {1.1, 2.2, 3.3};
	
	if(!(f = fopen("output.bin", "wb")))
		return -1;
	
	write_bin(v, sizeof(v) / sizeof(double), f);
	
	fclose(f);
	
	return 0;
} 
