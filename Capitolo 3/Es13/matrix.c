/* Author: Matteo Gianferrari
 * Data: 04/03/2022
 */
#include <stdlib.h>
#include "matrix.h"

/* int mat_isupper(const struct matrix *mat)
 * Parameters:
 * const struct matrix *mat;  puntatore a struttura dati matrice
 
 * Purpose:
 * Verifica se la matrice fornita e' quadrata triangolare superiore
 *
 * Return:
 * Se la matrice non e' quadrata o se non e' triangolare superiore ritorna 0.
 * ALtrimenti ritorna 1.
 *
 * Notes:
 * I dati della matrice sono memorizzati in memoria linearmente, per accedere ad
 * un elemento secondo il formato matrice si usa la formula: A_i_j = N_ROWS * i * j.
 */
int mat_isupper(const struct matrix *mat){
	size_t i = 0, j = 0;
	
	if(mat->rows != mat->cols)
		return 0;

	for(i = 0; i < mat->rows; i++)
		for(j = 0; j < i; j++)
			if(mat->data[mat->rows * i + j] != 0)
				return 0;	

	return 1;
}

/* int mat_islower(const struct matrix *mat)
 * Parameters:
 * const struct matrix *mat;  puntatore a struttura dati matrice
 
 * Purpose:
 * Verifica se la matrice fornita e' quadrata triangolare inferiore
 *
 * Return:
 * Se la matrice non e' quadrata o se non e' triangolare inferiore ritorna 0.
 * ALtrimenti ritorna 1.
 *
 * Notes:
 * Invece che iterare per righe e per colonne, viene iterato per colonne e per righe,
 * mantenedo la convenzione i per righe e j per colonne.
 */
int mat_islower(const struct matrix *mat){
	size_t i = 0, j = 0;
	
	if(mat->rows != mat->cols)
		return 0;

	for(j = 0; j < mat->cols; j++)
		for(i = 0; i < j; i++)
			if(mat->data[mat->cols * i + j] != 0)
				return 0;	

	return 1;
}
