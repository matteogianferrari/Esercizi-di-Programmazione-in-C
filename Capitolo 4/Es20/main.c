/* Author: Matteo Gianferrari
 * Data: 30/03/2022
 * Implementare la funzione che accetta come parametro un nome di file che deve essere aperto in lettura in modalita' testuale
 * e un puntatore ad una variabile di tipo unsigned int in cui si dovra' inserire il numero di dati presenti in un file strutturato.
 * La funzione deve ritornare un puntatore ad una zona di memoria (allocata dinamicamente nell'heap) contenente tutti i dati letti dal file.
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

	free(arr);
	
	return 0;
}

void print_dati(struct dato *arr, unsigned int n){
	size_t i;
	
	for(i = 0; i < n; i++)
		printf("%2u)\tValore: %6.4f - Classe: %u\n", i, arr[i].valore, arr[i].classe);
}
