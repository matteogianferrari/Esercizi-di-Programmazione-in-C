/* Author: Matteo Gianferrari
 * Data: 30/03/2022
 * Implementare la funzione che accetta come parametro un puntatore ad una zona di memoria contenente un numero di libri indicato dal valore  
 * puntato da pn. Accetta inoltre una stringa cerca. La funzione deve ritornare un puntatore ad una nuova zona di memoria (allocata dinamicamente 
 * nell'heap) contenente tutti i libri nel cui titolo e' presente la stringa cerca e impostare il valore puntato da pn al numero di libri 
 * ritornati. Se nessun  libro contiene la stringa, la funzione deve ritornare NULL e impostare il valore puntato da pn a 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include "libri.h"

void print_libri(struct libro *arr, size_t n);

int main(void){
	struct libro *arr;
	size_t n;
	
	arr = read_libri("libri1.txt", &n);
	arr = filtra_libri(arr, &n, "L'");
	print_libri(arr, n);
		
	free(arr);
	
	return 0;
}

void print_libri(struct libro *arr, size_t n){
	size_t i;
	
	for(i = 0; i < n; i++)
		printf("%u)\tCodice: %u\n\tTitolo: %s\n\tPagine: %u\n\n", i, arr[i].codice, arr[i].titolo, arr[i].pagine);
}
