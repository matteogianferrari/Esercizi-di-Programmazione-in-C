/* Author: Matteo Gianferrari
 * Data: 18/03/2022
 */
#include <stdlib.h>
#include "matrix.h"

/* struct matrix *mat_trasposta(const struct matrix *a)
 * Parameters:
 * const struct matrix *a;  puntatore a struttura matrice
 *
 * Purpose:
 * Alloca dinamicamente una matrice in cui memorizza   
 * la trasposta della matrice fornita.
 *
 * Return:
 * Puntatore a struttura matrice.
 *
 * Notes:
 * Nessuna.
 */
struct matrix *mat_trasposta(const struct matrix *a){
	size_t i, j;
	struct matrix *ret;

	if((ret = (struct matrix *)malloc(sizeof(*ret))) == NULL)
		return NULL;
	
	ret->rows = a->cols;
	ret->cols = a->rows;
	ret->data = (double *)malloc((ret->rows * ret->cols) * sizeof(*ret->data));	

	for(i = 0; i < ret->rows; i++)
		for(j = 0; j < ret->cols; j++)
			ret->data[i * ret->cols + j] = a->data[j * a->cols + i];
	
	return ret;
}
