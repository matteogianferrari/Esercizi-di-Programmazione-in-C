/* Author: Matteo Gianferrari
 * Data: 16/02/2022
 */
#include <stdio.h>
#include "array.h"

/* void array_remove(double *arr, size_t *pn, size_t pos)
 * Parameters:
 * double *arr;  puntatore ad array di double
 * size_t *pn;   puntatore a dimensione dell'array
 * size_t pos;   posizione in cui rimuovere il valore  
 *
 * Purpose:
 * Elimina dall'array l'elemento alla posizione pos spostando
 * indietro di una posizione tutti gli elementi successivi
 *
 * Return:
 * void                      
 *
 * Notes:
 * Il puntatore alla dimensione e' utilizzato per modificare 
 * direttamente dalla funzione il valore della variabile puntata.
 */
void array_remove(double *arr, size_t *pn, size_t pos){
	double *p;
	
	if(pos >= *pn)
		return;
	
	--*pn;
	for(p = arr + pos; p - arr < *pn; p++)
		*p = *(p + 1);
}
