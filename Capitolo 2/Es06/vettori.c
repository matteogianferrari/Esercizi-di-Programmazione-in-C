/* Author: Matteo Gianferrari
 * Data: 16/02/2022
 */
#include <stdio.h>
#include "vettori.h"

/* double prodotto_scalare(const double *x, const double *y, size_t n)
 * Parameters:
 * const double *x;  puntatore ad array di double solo leggibile
 * const double *y;  puntatore ad array di double solo leggibile
 * size_t n;         dimensione degli array
 *
 * Purpose:
 * Calcola il prodotto scalare dei due vettori 
 *
 * Return:
 * Se n == 0 o se uno dei due puntatori e' NULL ritorna 0
 * Altrimenti ritorna il prodotto scalare                      
 *
 * Notes:
 * Nessuna.
 */
double prodotto_scalare(const double *x, const double *y, size_t n){
	double prod = 0.0;
	size_t i;
	
	if(x == NULL || y == NULL || n == 0)
		return 0.0;	
	
	for(i = 0; i < n; i++)
		prod += x[i] * y[i];
	
	return prod;
}
