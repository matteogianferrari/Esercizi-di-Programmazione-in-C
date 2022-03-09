/* Author: Matteo Gianferrari
 * Data: 08/03/2022
 * Implementare la funzione che accetta una stringa e ritorna un'altra stringa allocata dinamicamente nell'heap. La funzione deve creare una
 * nuova stringa a partire da str, in cui tutte le sequenze di caratteri consecutivi ripetuti siano sostituiti da una singola occorrenza del 
 * carattere. Se str e' NULL, la funzione ritorna NULL (quindi non alloca memoria). Se str e' vuota, la funzione ritorna una stringa vuota.
 */
#include <stdio.h>
#include <stdlib.h>
#include "stringhe.h"

void main_test(const char *str);

int main(void){
	main_test("doppie");
	main_test("togliere tutte le ripppettizzzzzzzionnnnnni");
	main_test("              a              b              c    d     ");
	
	main_test(NULL);
	main_test("");
	main_test("          ");
	main_test("----------");
	
	return 0;
}

void main_test(const char *str){
	char *s = rimuovi_multipli(str);
	
	if(s != NULL)
		printf("%s\n", s);
	else
		printf("\n");
	
	free(s);
}
