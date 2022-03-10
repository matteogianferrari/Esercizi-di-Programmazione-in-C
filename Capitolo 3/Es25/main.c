/* Author: Matteo Gianferrari
 * Data: 10/03/2022
 * Implementare la funzione che accetta una stringa e ritorna un'altra stringa allocata dinamicamente nell'heap, contenente tutti i 
 * caratteri della stringa s presi una sola volta, nell'ordine con cui appaiono in s. Il puntatore ritornato deve puntare ad un'area 
 * di memoria grande esattamente il numero di byte necessari a contenere i caratteri unici e il terminatore. s non sara' mai NULL.
 */
#include <stdlib.h>
#include "stringhe.h"

int main(void){
	char *p;
	
	p = unici("ciaociao");
	free(p);
	p = unici("ciao casa");
	free(p);
	p = unici("");
	free(p);
	p = unici("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
	free(p);
	
	return 0;
}
