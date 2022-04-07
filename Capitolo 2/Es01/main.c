/* Author: Matteo Gianferrari
 * Data: 14/02/2022
 * Implementare una funzione che accetta come parametri due numeri naturali e restituisce il coefficiente binomiale corrispondente
 * (n k) = n! / k! * (n - k)! dove il ! indica il fattoriale. Nel caso n sia 0 o k sia maggiore di n la funzione ritorna -1. Visti
 * i valori elevati coinvolti nel calcolo si suggerisce di utilizzare il tipo double all'interno della funzione durante i calcoli.
 */
#include <stdio.h>
#include "binomiale.h"

int main(void){
	double d;
	
	d = binomiale(5, 2);
	d = binomiale(10, 1);
	d = binomiale(10, 4);
	d = binomiale(10, 2);
	d = binomiale(0, 1);
	d = binomiale(1, 0);
	d = binomiale(1, 1);
		
	return 0;
}
