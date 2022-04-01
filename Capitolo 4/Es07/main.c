/* Author: Matteo Gianferrari
 * Data: 01/04/2022
 * Implementare la funzione che accetta un puntatore ad un vettore di interi senza segno a 8 bit h, il numero di elementi presenti nel vettore
 * n e un puntatore a file aperto in scrittura. Di seguito viene dettagliato il fomrato per disegnare un istogramma di interi utilizzando
 * caratteri ASCII. Dato un vettore di N interi, occorre disegnare N barre verticali in cui l'elemento in posizione i rappresenta l'altezza
 * della i-esima barra verticale Le barre verticali sono composte dal carattere '|', gli spazi vuoti saranno riempiti col carattere '.'.
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "istogramma.h"

int main(void){
	uint8_t h[] = {1, 2, 3, 4, 5};
	uint8_t h1[] = {5, 0, 5, 0, 1, 10};
	uint8_t h2[] = {1, 2, 3, 1, 2, 3};
	
	disegna(h, sizeof(h), stdout);
	putc('\n', stdout);
	
	disegna(h1, sizeof(h1), stdout);
	putc('\n', stdout);
	
	disegna(h2, sizeof(h2), stdout);
	putc('\n', stdout);	
	
	return 0;
}
