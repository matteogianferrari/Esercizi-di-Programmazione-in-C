/* Author: Matteo Gianferrari
 * Data: 14/03/2022
 * Implementare la funzione che consenta di scrivere la matrice mat sul file f (gia' aperto) in modalita' testuale inviando prima il 
 * valore di rows '\n', cols '\n', i valori della matrice separati da '\t' all'interno della riga e con un '\n' alla fine di ogni riga.
 */
#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

int main(void){
	double ad[] = {
		1.0, 2.0, 3.0,
		4.0, 5.0, 6.0
	};
	struct matrix a = {2, 3, ad};
	
	matrix_write(&a, stdout);
	
	double bd[] = {
		0.933705, 0.923426, 0.977703,
		0.421450, 0.552091, 0.290288,
		0.761847, 0.051048, 0.557931
	};
	struct matrix b = {3, 3, bd};
	
	matrix_write(&b, stdout);

	return 0;
}
