/* Author: Matteo Gianferrari
 * Data: 14/03/2022
 * Implementare la funzione che accetta come parametro un puntatore ad una matrice e e deve ritornare una nuova matrice, allocata dinamicamente
 * nell'heap, con le stesse dimensioni e lo stesso contenuto, ovvero una copia della matrice. Il puntatore mat non sara' mai NULL.
 */
#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

void mat_print(struct matrix *mat);

int main(void){
	double data[] = {
		1.0, 2.0, 3.0,
		4.0, 5.0, 6.0
	};
	struct matrix mat = {2, 3, data};
	struct matrix *m;
	
	printf("Matrice originale:\n");
	mat_print(&mat);
	
	m = mat_copy(&mat);
	printf("\nMatrice copiata:\n");
	mat_print(m);
	
	free(m->data);
	free(m);
	
	return 0;
}

void mat_print(struct matrix *mat){
	size_t i, j;
	
	for(i = 0; i < mat->rows; i++)
		for(j = 0; j < mat->cols; j++)
			printf((j == mat->cols - 1) ? "%f\n" : "%f\t", mat->data[mat->rows * i + j]);
}
