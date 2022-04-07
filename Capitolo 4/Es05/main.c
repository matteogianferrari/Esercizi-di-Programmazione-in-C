/* Author: Matteo Gianferrari
 * Data: 07/04/2022
 * Implementare la funzione che accetta come parametro un puntatore a puntatore a char vs e un numero intero senza segno n.
 * Ogni cifra e' rappresentata da 2 righe di 3 caratteri ciascuna. La funzione deve aggiungere in coda ai 3 vettori di char puntati
 * da vs i caratteri necessari per rappresentare la cifra n, considerando che i 3 vettori rappresentano le 3 righe di un output testuale.
 */
#include <stdio.h>
#include <stdlib.h>
#include "stringhe.h"

int main(void){
	size_t i;
	
	char righe[3][200] = {0};						//matrice 3x200 di caratteri
	char *vs[3] = {righe[0], righe[1], righe[2]};   //array (di dimensione 3 elementi) di puntatori a char 
	
	accoda_cifra(vs, 0);
	accoda_cifra(vs, 1);
	accoda_cifra(vs, 2);
	accoda_cifra(vs, 3);
	accoda_cifra(vs, 4);
	accoda_cifra(vs, 5);	
	accoda_cifra(vs, 6);
	accoda_cifra(vs, 7);
	accoda_cifra(vs, 8);
	accoda_cifra(vs, 9);
	
	for(i = 0; i < 3; i++)
		puts(vs[i]);
	
	return 0;
}
