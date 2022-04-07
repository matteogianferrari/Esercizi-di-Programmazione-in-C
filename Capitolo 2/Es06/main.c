/* Author: Matteo Gianferrari
 * Data: 16/02/2022
 * Implementare la funzione che elimina dall'array l'elemento alla posizione pos (se e' all'interno dell'array) spostando indietro
 * di una posizione tutti gli elementi successivi oppurtunamente. Se riesce ad eliminare un elemento, la funzione deve modificare la
 * variabile contenente la dimensione decrementandola di uno. Arr e pn non saranno mai NULL, la dimensione dell'array può essere 0.
 */
#include <stdio.h>
#include "array.h"

void array_print(double *arr, size_t n);

int main(void){
	double arr[] = {22.4, -4.67, 140.0, 1.99, 86.7};
	size_t n = sizeof(arr) / sizeof(*arr);
		
	array_print(arr, n);
	array_remove(arr, &n, 2);
	array_print(arr, n);
	
	return 0;
}

void array_print(double *arr, size_t n){
	size_t i;
	
	for(i = 0; i < n; i++)
		printf("%f ", arr[i]);
	printf("\n");
}
