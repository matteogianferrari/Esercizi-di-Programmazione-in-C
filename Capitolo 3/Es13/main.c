/* Author: Matteo Gianferrari
 * Data: 06/03/2022
 * Implementare la struttura dati matrix e la funzione specificata. La struct consente di rappresentare matrici di dimensioni arbitraria, dove rows e' il numero di righe, cols e' il
 * numero di colonne e data e' un puntatore a rows * cols valori di tipo double memorizzati per righe. La funzione accetta come parametro un puntatore ad una matrice e due indici di
 * colonna (partono da 0). La funzione deve scambiare le colonne in posizione c1 e c2. Il puntatore alla matrice non sara' mai NULL e c1 e c2 saranno sempre indici validi.
 */
#include <stdlib.h>
#include <stdio.h>
#include "matrix.h"

void mat_print(struct matrix *mat);

int main(void){
	double data[] = {
		0, 1, 2,
		3, 4, 5,
		6, 7, 8
	};
	struct matrix m = {3, 3, data};
	
	mat_print(&m);
	mat_swapcols(&m, 1, 2);
	putchar('\n');
	mat_print(&m);
	
	return 0;
}

void mat_print(struct matrix *mat){
	size_t i, j;
	
	for(i = 0; i < mat->rows; i++){
		for(j = 0; j < mat->cols; j++)
			printf("%6.3f ", mat->data[mat->rows * i + j]);
		putchar('\n');
	}
}
