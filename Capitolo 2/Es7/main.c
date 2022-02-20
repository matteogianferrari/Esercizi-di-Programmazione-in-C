/* Author: Matteo Gianferrari
 * Data: 17/02/2022
 * Implementare la funzione che accetta come parametri un puntatore ad un vettore di double arr e un dato di
 * tipo size_t che ne indica la dimensione e deve restituire la media dei valori conentuti nel vettore.
 */
#include <stdio.h>
#include "array.h"

int main(void){
	double ris, arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	size_t n = sizeof(arr) / sizeof(*arr);
	
	ris = media(arr, n);
	
	return 0;
}
