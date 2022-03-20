/* Author: Matteo Gianferrari
 * Data: 18/03/2022
 */
#include <stdlib.h>
#include "matrix.h"

/* struct matrix *mat_somma_diretta(const struct matrix *a, const struct matrix *b)
 * Parameters:
 * const struct matrix *a;  puntatore a struttura matrice
 * const struct matrix *b;  puntatore a struttura matrice
 *
 * Purpose:
 * Alloca dinamicamente una matrice in grado di contenere   
 * la somma diretta delle 2 matrici fornite in input.
 *
 * Return:
 * Puntatore a struttura matrice.
 *
 * Notes:
 * Nessuna.
 */
struct matrix *mat_somma_diretta(const struct matrix *a, const struct matrix *b){
	size_t i, j;
	struct matrix *ret;
	
	if((ret = (struct matrix *)malloc(sizeof(*ret))) == NULL)
		return NULL;

	ret->rows = a->rows + b->rows;
	ret->cols = a->cols + b->cols;
	ret->data = (double *)malloc((ret->rows * ret->cols) * sizeof(*ret->data));	
	
	for(i = 0; i < ret->rows; i++){
		for(j = 0; j < ret->cols; j++){
			if(i < a->rows && j < a->cols)
				ret->data[j + i * ret->cols] = a->data[j + i * a->cols];
			else if((i < a->rows && j >= a->cols) || (i >= a->rows && j < a->cols))
				ret->data[j + i * ret->cols] = 0;
			else if(i >= a->rows && j >= a->cols)
				ret->data[j + i * ret->cols] = b->data[(j - a->cols) + (i - a->rows) * b->cols];
		}
	}
	
	return ret;
}
