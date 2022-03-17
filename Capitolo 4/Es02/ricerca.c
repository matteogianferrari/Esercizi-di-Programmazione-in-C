/* Author: Matteo Gianferrari
 * Data: 17/03/2022
 */
#include <stdlib.h>
#include "ricerca.h"

/* int ricerca_binaria(const int *v, size_t n, int x)
 * Parameters:
 * const int *v;  puntatore ad array di valori
 * size_t n;      dimensione dell'array
 * int x;         valore da ricercare
 *
 * Purpose:
 * Algoritmo di ricerca binaria di un elemento in un array.
 *
 * Return:
 * Se l'elemento e' presente nell'array ritorna l'indice.
 * Altrimenti ritorna -1.
 *
 * Notes:
 * Versione iterativa.
 */
int ricerca_binaria(const int *v, size_t n, int x){
	int start = 0, end = n - 1, mid;
	
	while(start <= end){
		mid = (start + end) / 2;
		
		if(v[mid] == x)
			return mid;
		else if(v[mid] > x)
			end--;
		else if(v[mid] < x)
			start++;
	}
	
	return -1;
}
