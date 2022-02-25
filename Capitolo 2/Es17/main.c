/* Author: Matteo Gianferrari
 * Data: 25/02/2022
 * Implementare la funzione che accetta come parametri due puntatori a vettori di double arr1 e arr2 e un dato di tipo size_t che ne
 * indica la dimensione n (gli array sono della stessa dimensione). La funzione deve restituire un puntatore ad un vettore allocato
 * dinamicamente nell'heap, formato da n elementi di tipo double calcolati come la somma dei corrispondenti elementi di arr1 e arr2.
 */
#include <stdio.h>
#include <stdlib.h>
#include "array.h"

int main(void){
	double arr1[] = {1, 2, 3};
	double arr2[] = {4, 5, 6};
	double *dest;
	
	dest = array_somma(arr1, arr2, sizeof(arr1) / sizeof(*arr1));
	free(dest);
	
	return 0;
}
