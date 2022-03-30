/* Author: Matteo Gianferrari
 * Data: 30/03/2022
 */
#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

/* int matrix_read(struct matrix *mat, FILE *f)
 * Parameters:
 * struct matrix *mat;  puntatore a struttura matrice
 * FILE *f;             puntatore a file
 *
 * Purpose:
 * Legge la dimensione della matrice da file, alloca dinamicamente 
 * una matrice in grado di contenere i dati leggendoli da file.
 *
 * Return:
 * Se avvengono errori di lettura ritorna 0.
 * Altrimenti ritorna 1.
 *
 * Notes:
 * Nessuna.
 */
int matrix_read(struct matrix *mat, FILE *f){
	size_t i, j;
	
	if(fscanf(f, "%u", &mat->rows) != 1)
		return 0;
		
	if(fscanf(f, "%u", &mat->cols) != 1)
		return 0;
	
	mat->data = malloc((mat->rows * mat->cols) * sizeof(*mat->data));
	
	for(i = 0; i < mat->rows; i++){
		for(j = 0; j < mat->cols; j++){
			if(fscanf(f, "%lf", &mat->data[mat->cols * i + j]) != 1){
				free(mat->data);	
				return 0;
			}
		}
	}

	return 1;
}
