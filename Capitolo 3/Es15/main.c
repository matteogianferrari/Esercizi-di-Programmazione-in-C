/* Author: Matteo Gianferrari
 * Data: 06/03/2022
 * Implementare la funzione che accetta come parametro un puntatore ad una zona di memoria contenente una matrice quadrata di lato n (il secondo parametro), memorizzzata per righe.
 * La funzione deve ritornare un puntatore ad una nuova zona di memoria allocata dinamicamente nell'heap contenente gli elementi della diagonale principale della matrice. 
 */
#include <stdlib.h>
#include <stdio.h>
#include "matrici.h"

int main(void){
	double *arr;
	
	double data1[] = {
		0, 1, 2,
		3, 4, 5,
		6, 7, 8
	};
	arr = mat_diag(data1, 3);
	
	double data2[] = {
		0, 1, 2, 3, 4, 5,
		6, 7, 8, 9, 8, 7,
		6, 5, 4, 3, 2, 1,
		0, 1, 2, 3, 4, 5,
		6, 7, 8, 9, 8, 7,
		6, 5, 4, 3, 2, 1,
	};
	arr = mat_diag(data2, 6);
	
	free(arr);
	
	return 0;
}
