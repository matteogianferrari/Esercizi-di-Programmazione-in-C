/* Author: Matteo Gianferrari
 * Data: 30/03/2022
 * Implementare la funzione che legga la matrice mat dal file f (gia' aperto) allocando opportunamente la memoria nell'heap.
 * La matrice e' memorizzata in formato testuale decimale con il valore di rows seguito da '\n', il valore di cols seguito
 * da '\n', i valori della matrice separati da '\t' all'interno della riga e con un '\n' alla fine di ogni riga. La funzione
 * ritorna 1 se la lettura e' andata a buon fine, 0 se per qualche motivo e' fallita. Il puntatore alla matrice non sara' mai NULL.
 */
#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main(void){
	struct matrix mat;
	FILE *f;
	
	if((f = fopen("A.txt", "r")) == NULL)
		return EXIT_FAILURE;
	
	matrix_read(&mat, f);

	free(mat.data);
	
	return 0;
}
