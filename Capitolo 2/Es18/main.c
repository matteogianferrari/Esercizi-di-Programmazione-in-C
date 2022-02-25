/* Author: Matteo Gianferrari
 * Data: 25/02/2022
 * Implementare la funzione che accetta come parametri la dimensione di un vettori di int n e un valore intero vale e deve restituire un
 * puntatore ad un vettore allocato dinamicamente nell'heap, formato da n elementi in cui il primo vale val, il secondo val - 1 e cosi' via.
 */
#include <stdlib.h>
#include "array.h"

int main(void){
	int *p;
	
	p = crea_inizializza(10, 5);
	free(p);
	
	return 0;
}
