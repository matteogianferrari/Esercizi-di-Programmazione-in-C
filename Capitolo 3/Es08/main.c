/* Author: Matteo Gianferrari
 * Data: 03/03/2022
 * Implementare la funzione che accetta una stringa e deve restituire in un dato di tipo size_t quante parole sono  
 * presenti all'interno della stringa, dove con "parola" si intendiamo una sequenza di caratteri diversi da spazio.
 */
#include <stdlib.h>
#include "conta.h"

int main(void){
	size_t n;
	
	n = conta_parole("una");
	n = conta_parole(" una");
	n = conta_parole("una ");
	n = conta_parole(" una ");
	
	n = conta_parole("una   due");
	n = conta_parole("una   due  tre ");
	n = conta_parole("  una due tre   quattro    ");
	
	n = conta_parole("");
	n = conta_parole(" ");
	n = conta_parole("  ");
	
	return 0;
}
