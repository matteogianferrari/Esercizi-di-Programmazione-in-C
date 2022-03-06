/* Author: Matteo Gianferrari
 * Data: 06/03/2022
 */
#include <stdlib.h>
#include "matrix.h"

/* void mat_swapcols(struct matrix *mat, size_t c1, size_t c2)
 * Parameters:
 * const struct matrix *mat;  puntatore a struttura dati matrice
 * size_t c1;				  indice di colonna da swappare
 * size_t c2;				  indice di colonna da swappare
 *
 * Purpose:
 * Swappa le colonne specificate della matrice fornita
 *
 * Return:
 * void
 *
 * Notes:
 * I dati della matrice sono memorizzati in memoria linearmente, per accedere ad
 * un elemento secondo il formato matrice si usa la formula: A_i_j = N_ROWS * i * j,
 * Non e' richiesto error checking sul puntatore e sugli indici.
 */
void mat_swapcols(struct matrix *mat, size_t c1, size_t c2){
	size_t i;
	double temp;
	
	for(i = 0; i < mat->rows; i++){
		temp = mat->data[mat->rows * i + c1];
		mat->data[mat->rows * i + c1] = mat->data[mat->rows * i + c2];
		mat->data[mat->rows * i + c2] = temp;	
	}
}
