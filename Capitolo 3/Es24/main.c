/* Author: Matteo Gianferrari
 * Data: 10/03/2022
 * Implementare la funzione che accetta una stringa e ritorna un'altra stringa allocata dinamicamente nell'heap, contenente i caratteri
 * della stringa in ingresso, senza tutti gli spazi iniziali e finali. La funzione deve ritornare NULL (e quindi non allocare memoria) se e' NULL.
 */
#include <stdio.h>
#include <stdlib.h>
#include "trim.h"

int main(void){
	char *p;
	
	p = trim("prova");
	free(p);
	p = trim(" prova");
	free(p);
	p = trim(" prova ");
	free(p);
	p = trim("  prova  ");
	free(p);
	p = trim("    ");
	free(p);
	p = trim("");
	free(p);
	p = trim(NULL);
	free(p);
	p = trim("  test  test  test  ");
	free(p);
	
	return 0;
}
