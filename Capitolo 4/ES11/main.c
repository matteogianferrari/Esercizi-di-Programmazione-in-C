/* Author: Matteo Gianferrari
 * Data: 18/03/2022
 * Implementare la funzione che accetta come parametro un puntatore ad una matrice e deve ritornare 
 * la trasposta, allocata dinamicamente sull'heap. Il puntatore alla matrice non sara' mai NULL.
 */
#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"

void mat_print(struct matrix *mat);

int main(void){
	double data[] = {
		1, 2, 3, 4,
		5, 6, 7, 8
	};
	struct matrix mat = {2, 4, data};
	struct matrix *ret;
	
	ret = mat_trasposta(&mat);
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
