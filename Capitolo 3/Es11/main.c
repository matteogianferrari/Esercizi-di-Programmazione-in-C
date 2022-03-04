/* Author: Matteo Gianferrari
 * Data: 04/03/2022
 * Implementare la funzione che accetta come parametro values, un puntatore ad una zona di memoria contenente un vettore di valori numerici interi
 * da 0 a 127 e un dato di tipo size_t che ne indica la dimensione n. La funzione, per ogni valore, invia su standard output una sequenza
 * di tanti caratteri '*' quanto e' il valore in esame, seguita da un '\n'. Se values e' NULL o n = 0, la funzione non invia nulla in output.
 */
#include <stdio.h>
#include "histo.h"

int main(void){
	char h1[] = {1, 2, 3};
	printf("Primo istogramma:\n");
	histogram(h1, sizeof(h1));
	putchar('\n');
	
	char h2[] = {12, 1, 6, 8, 3, 2, 2, 2, 4};
	printf("Secondo istogramma:\n");
	histogram(h2, sizeof(h2));
	putchar('\n');
	
	return 0;
}
