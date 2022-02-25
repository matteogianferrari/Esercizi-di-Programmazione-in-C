/* Author: Matteo Gianferrari
 * Data: 25/02/2022
 */
#include <stdio.h>
#include <stdlib.h>
#include "array.h"

/* double *array_somma(const double *arr1, const double *arr2, size_t n)
 * Parameters:
 * const double *arr1;  puntatore ad array di double
 * const double *arr2;  puntatore ad array di double
 *
 * Purpose:
 * Alloca un array di n elementi e ne inserisce la somma dei 2 forniti in ingresso
 *
 * Return:
 * Puntatore ad array di double                    
 *
 * Notes:
 * arr1 e arr2 non possono essere mai NULL, n sara' sempre maggiore di 0, quindi
 * non e' necessario implementare controlli oltre all'allocazione.
 */
double *array_somma(const double *arr1, const double *arr2, size_t n){
	double *arr;
	size_t i;
	
	if((arr = (double *)malloc(n * sizeof(*arr))) == NULL)
		return NULL;
	
	for(i = 0; i < n; i++)
		arr[i] = arr1[i] + arr2[i];
	
	return arr;
}
