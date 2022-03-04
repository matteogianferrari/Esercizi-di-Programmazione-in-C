/* Author: Matteo Gianferrari
 * Data: 04/03/2022
 * Implementare la struttura dati matrix e le funzioni specificate. La struct consente di rappresentare matrici di dimensioni arbitraria, dove rows e' il numero di righe, cols e' il
 * numero di colonne e data e' un puntatore a rows * cols valori di tipo double memorizzati per righe. La funzione accetta come parametro un puntatore ad una matrice e deve ritornare
 * 1 se la matrice e' quadrata e triangolare superiore, 0 altrimenti. Similmente la funzione per la matrice quadrata triangolare inferiore. Il puntatore non sara' mai NULL.
 */
#include <stdlib.h>
#include "matrix.h"

int main(void){
	int ret;
	
	double data1[] = {
		1, 2,
		0, 3
	};
	struct matrix mat1 = {2, 2, data1};
	ret = mat_isupper(&mat1);
	ret = mat_islower(&mat1);
	
	double data2[] = {
		1, 2, 3,
		0, 3, 7,
		0, 6, 9
	};
	struct matrix mat2 = {3, 3, data2};
	ret = mat_isupper(&mat2);
	ret = mat_islower(&mat2);

	double data3[] = {
		1, 0, 0, 0, 0, 0,
		1, 3, 0, 0, 0, 0,
		1, 3, 9, 0, 0, 0,
		2, 3, 6, 1, 0, 0,
		5, 6, 7, 4, 3, 0,
		5, 6, 7, 4, 3, 9
	};
	struct matrix mat3 = {6, 6, data3};
	ret = mat_isupper(&mat3);
	ret = mat_islower(&mat3);
	
	return 0;
}
