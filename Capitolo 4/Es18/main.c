/* Author: Matteo Gianferrari
 * Data: 30/03/2022
 * Implementare la funzione che accetta come parametro un nome di file da aprire in lettura testuale e un puntatore ad una variabile di tipo size_t in cui
 * si dovra' inserire il numero di libri presenti in un file strutturato. La funzione deve ritornare un puntatore ad una nuova zona di memoria (allocata
 * dinamicamente nell'heap) contenente tutti i libri letti dal file. Il numero di libri non e' noto a priori e non puo' essere vincolato dal codice.
 */
#include <stdio.h>
#include <stdlib.h>
#include "libri.h"

void print_libri(struct libri *arr, size_t n);

int main(void){
	struct libri *arr;
	size_t n;
	
	arr = read_libri("libri1.txt", &n);
	print_libri(arr, n);
	
	free(arr);
	
	return 0;
}

void print_libri(struct libri *arr, size_t n){
	size_t i;
	
	for(i = 0; i < n; i++)
		printf("%u)\tCodice: %u\n\tTitolo: %s\n\tPagine: %u\n\n", i, arr[i].codice, arr[i].titolo, arr[i].pagine);
}
