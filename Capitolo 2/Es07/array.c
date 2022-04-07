/* Author: Matteo Gianferrari
 * Data: 17/02/2022
 */
#include <stdio.h>
#include "array.h"

/* double media(double *arr, size_t n)
 * Parameters:
 * double *arr;  puntatore ad un array di double
 * size_t n;     dimensione dell'array   
 * 
 * Purpose:
 * Calcola la media dei valori presenti nell'array
 *
 * Return:
 * Media dei valori                       
 *
 * Notes:
 * Nessuna.
 */
double media(double *arr, size_t n){
	size_t i;
    double m = 0.0;
	
	for(i = 0; i < n; i++)
		m += arr[i];
	
	return m / n;
}
