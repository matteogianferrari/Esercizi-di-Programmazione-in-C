/* Author: Matteo Gianferrari
 * Data: 25/02/2022
 */
#include <stdlib.h>
#include <stdio.h>
#include "array.h"

/* int *crea_inizializza(size_t n, int val)
 * Parameters:
 * size_t n;  dimensione dell'array
 * int val;   valore iniziale
 *
 * Purpose:
 * Alloca un array di n elementi e ne inizializza i valori con val decrementato ad ogni elemento
 *
 * Return:
 * Puntatore ad array di int              
 *
 * Notes:
 * Nessuna.
 */
int *crea_inizializza(size_t n, int val){
	int *arr;
	size_t i;
	
	if((arr = (int *)malloc(n * sizeof(*arr))) == NULL)
		return NULL;
	
	for(i = 0; i < n; i++)
		arr[i] = val--;
	
	return arr;
}
