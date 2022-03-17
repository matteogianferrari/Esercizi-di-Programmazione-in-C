/* Author: Matteo Gianferrari
 * Data: 17/03/2022
 * Implementare la funzione che accetta un puntatore ad un vettore v di interi, contenente n elementi e deve ricercare il valore x nel vettore.
 * Il vettore e' ordinato dal valore piu' piccolo al valore piu' grande. Se l'elemento e' presente nel vettore, la funzione ritorna l'indice
 * dell'elemento nel vettore, altrimenti ritorna -1. Se l'elemento e' presente piu' volte, l'indice sara' quello di un qualsiasi degli elementi con il valore x.
 */
#include <stdlib.h>
#include "ricerca.h"

int main(void){
	int pos;

	int v1[] = {1, 2, 3};
	pos = ricerca_binaria(v1, sizeof(v1) / sizeof(*v1), 1);
	
	int v2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	pos = ricerca_binaria(v2, sizeof(v2) / sizeof(*v2), 6);
	
	int v3[] = {10, 20, 30, 100, 200, 300, 1000, 2000, 3000};
	pos = ricerca_binaria(v3, sizeof(v3) / sizeof(*v3), 17);
	
	return 0;
}
