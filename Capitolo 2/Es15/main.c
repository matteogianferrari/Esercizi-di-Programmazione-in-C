/* Author: Matteo Gianferrari
 * Data: 25/02/2022
 * Implementare la funzione che accetta come parametro matr, un puntatore ad una zona di memoria contenente una matrice quadrata 
 * di lato 3, memorizzata per righe, ovvero contenente 3 x 3 elementi, dei quali i primi 3 sono la prima riga, i successivi 2 la 
 * seconda e gli ultimi tre la terza. La funzione deve ritornare il determinante della matrice passata come parametro.
 */ 
#include <stdio.h>
#include "matrici.h"

int main(void){
	double det;
	double a[] = {1, 2, 3, 1, 1, 1, 1, 2, 1};
	double b[] = {1, 2, 3, 1, 2, 3, 1, 1, 1};
	
	det = det3x3(a);
	det = det3x3(b);
	
	return 0;
}
