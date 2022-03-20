/* Author: Matteo Gianferrari
 * Data: 18/03/2022
 */
#include <stdlib.h>
#include "matrix.h"

/* struct matrix *mat_replica(const struct matrix *a, int dir)
 * Parameters:
 * const struct matrix *a;  puntatore a struttura matrice
 * int dir;                 direzione di copia
 *
 * Purpose:
 * Alloca dinamicamente una matrice in grado di contenere la matrice
 * fornita, oltre ad una copia di essa nella direzione specificata.
 *
 * Return:
 * Puntatore a struttura matrice.
 *
 * Notes:
 * Nessuna.
 */
struct matrix *mat_replica(const struct matrix *a, int dir){
	size_t i, j, a_i, a_j;
	struct matrix *ret;
	
	if((ret = (struct matrix *)malloc(sizeof(*ret))) == NULL)
		return NULL;
	
	ret->rows = (dir) ? 2 * a->rows : a->rows;
	ret->cols = (dir) ? a->cols : 2 * a->cols;
	ret->data = (double *)malloc((ret->rows * ret->cols) * sizeof(*ret->data));
	
	for(i = 0; i < ret->rows; i++){
		for(j = 0; j < ret->cols; j++){
			a_i = (dir) ? ((i >= a->rows) ? i - a->rows : i) : i;		
			a_j = (dir) ? j : ((j >= a->cols) ? j - a->cols : j);
			
			ret->data[j + i * ret->cols] = a->data[a_i * a->cols + a_j];
		}
	}

	return ret;
}
