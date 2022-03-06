/* Author: Matteo Gianferrari
 * Data: 06/03/2022
 */
#include <stdlib.h>
#include "matrici.h"

/* double *mat_diag(double *mat, size_t n)
 * Parameters:
 * double *mat;  puntatore ad array di double
 * size_t n;     lato della matrice quadrata
 *
 * Purpose:
 * Alloca un array e vi memorizza gli elementi della diagonale
 * principale della matrice quadrata
 *
 * Return:
 * puntatore ad array di double
 *
 * Notes:
 * Non e' richiesto error checking sul puntatore fornito.
 */
double *mat_diag(double *mat, size_t n){
	size_t i;
	double *arr;
	
	arr = (double *)malloc(n * sizeof(*arr));
	
	for(i = 0; i < n; i++)
		arr[i] = mat[n * i + i];
	
	return arr;
}
