/* Author: Matteo Gianferrari
 * Data: 30/03/2022
 * Implementare la funzione che accetta come parametro un nome di file che deve essere aperto in scrittura binaria, un puntatore
 * alla zona di memoria contenente variabili di tipo struct dato e il numero di dati contenuti in quella zona di memoria.
 * La funzione deve scrivere sul file 11 interi senza segno 32 bit in little endian corrispondenti al numero di dati di ogni
 * possibile classe (da 0 a 10). La funzione deve ritornare 1 se si e' conclusa in modo corretto, 0 altrimenti.
 */
#include <stdio.h>
#include <stdlib.h>
#include "dati.h"

void print_dati(struct dato *arr, unsigned int n);

int main(void){
	struct dato *arr;
	unsigned int n;
	
	arr = read_dati("dati1.txt", &n);
	print_dati(arr, n);
	salva_conteggio_bin("output.bin", arr, n);
	
	free(arr);
	
	return 0;
}

void print_dati(struct dato *arr, unsigned int n){
	size_t i;
	
	for(i = 0; i < n; i++)
		printf("%2u)\tValore: %6.4f - Classe: %u\n", i, arr[i].valore, arr[i].classe);
}
