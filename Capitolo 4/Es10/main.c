/* Author: Matteo Gianferrari
 * Data: 18/03/2022
 * Implementare la funzione che accetta come parametro due puntatori a matrici e deve ritornare la 
 * somma diretta, allocata dinamicamente nell'heap. I puntatori alla matrice non saranno mai NULL.
 */
#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"

void mat_print(struct matrix *mat);

int main(void){
	double data1[] = {
		1, 2, 3,
		4, 5, 6,
		7, 8, 9
	};
	double data2[] = {
		1, 2,
		3, 4
	};
	struct matrix mat1 = {3, 3, data1};
	struct matrix mat2 = {2, 2, data2};
	struct matrix *ret;
	
	ret = mat_somma_diretta(&mat1, &mat2);
	mat_print(ret);
	
	free(ret->data);
	free(ret);
	
	return 0;
}

void mat_print(struct matrix *mat){
	size_t i, j;
	
	for(i = 0; i < mat->rows; i++)
		for(j = 0; j < mat->cols; j++)
			printf((j == mat->cols - 1) ? "%f\n" : "%f\t", mat->data[mat->cols * i + j]);
}
