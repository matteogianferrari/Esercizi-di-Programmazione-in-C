/* Author: Matteo Gianferrari
 * Data: 08/03/2022
 * Implementare la funzione che accetta come parametri 2 stringhe e deve restituire un puntatore ad una nuova stringa (allocata
 * dinamicamente nell'heap) formata dall'alternarsi dei caratteri della prima e della seconda stringa. Se le stringhe 
 * non hanno la stessa lunghezza, la nuova stringa terminera' con i caratteri rimasti della stringa piu' lunga.
 */
#include <stdlib.h>
#include "alterna.h"

int main(void){
	char *p;
	
	p = alterna("prova", "1234567");
	free(p);
	
	return 0;
}
