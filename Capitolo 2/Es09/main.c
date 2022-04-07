/* Author: Matteo Gianferrari
 * Data: 20/02/2022
 * Implementare la funzione che accetta due stringhe zero terminate. Deve restituire il numero di occorrenze di 
 * stringa in testo. La funzione deve ritornare 0 se testo o stringa sono NULL o se contengono solo il terminatore.
 */
#include <stdio.h>
#include "conta.h"

int main(void){
	size_t c;
	char testo[] = "Qui bisogna cercare la parola cercare";
	char stringa[] = "cercare";
	
	c = conta_occorrenze(testo, stringa);
	c = conta_occorrenze("questo è il testo", "questo");
	c = conta_occorrenze("questo è il testo", NULL);
	
	return 0;
}
