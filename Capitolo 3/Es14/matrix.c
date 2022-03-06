/* Author: Matteo Gianferrari
 * Data: 06/03/2022
 */
#include <stdlib.h>
#include "matrix.h"

/* void mat_swaprows(struct matrix *mat, size_t r1, size_t r2)
 * Parameters:
 * const struct matrix *mat;  puntatore a struttura dati matrice
 * size_t r1;				  indice di riga da swappare
 * size_t r2;				  indice di riga da swappare
 *
 * Purpose:
 * Swappa le righe specificate della matrice fornita
 *
 * Return:
 * void
 *
 * Notes:
 * Non e' richiesto error checking sul puntatore e sugli indici,
 * mantenuta la convenzione i per righe e j per colonne.
 */
void mat_swaprows(struct matrix *mat, size_t r1, size_t r2){
	size_t j;
	double temp;
	
	for(j = 0; j < mat->cols; j++){
		temp = mat->data[mat->cols * r1 + j];
		mat->data[mat->cols * r1 + j] = mat->data[mat->cols * r2 + j];
	    mat->data[mat->cols * r2 + j] = temp;	
	}
}
