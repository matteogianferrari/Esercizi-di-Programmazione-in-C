/* Author: Matteo Gianferrari
 * Data: 14/03/2022
 */
#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

/* void matrix_write(const struct matrix *mat, FILE *f)
 * Parameters:
 * const struct matrix *mat;  puntatore a struttura matrix
 * FILE *f;					  puntatore a file
 *
 * Purpose:
 * Scrive su file la dimensione della matrice, per poi scrivere
 * gli elementi della matrice su file separati da '\t'.
 *
 * Return:
 * void   
 *
 * Notes:
 * Nessuna.
 */
void matrix_write(const struct matrix *mat, FILE *f){
	size_t i, j;
	
	fprintf(f, "%u\n%u\n", mat->rows, mat->cols);

	for(i = 0; i < mat->rows; i++)
		for(j = 0; j < mat->cols; j++)
			fprintf(f, (j == mat->cols - 1) ? "%f\n" : "%f\t", mat->data[mat->rows * i + j]);
}
