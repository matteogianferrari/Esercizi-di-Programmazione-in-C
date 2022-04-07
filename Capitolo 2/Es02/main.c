/* Author: Matteo Gianferrari
 * Data: 16/02/2022
 * Implementare la definizione della funzione che accetta come parametri tre numeri naturali e restituisce il coefficiente 
 * binomiale simemtrico corrispondente (n h,k) = n! / (h! * k!) dove il ! indica il fattoriale. Visti i valori elevati 
 * coinvolti nel calcolo si suggerisce di utilizzare il tipo double all'interno della funzione durante i calcoli.
 */
#include "binomiale.h"

int main(void){
	double d;
	
	d = binomiale_simmetrico(5, 2, 3);
	d = binomiale_simmetrico(10, 1, 1);
	d = binomiale_simmetrico(10, 4, 2);
	d = binomiale_simmetrico(10, 2, 4);
	d = binomiale_simmetrico(0, 1, 1);
	d = binomiale_simmetrico(1, 0, 1);
	d = binomiale_simmetrico(1, 1, 0);
		
	return 0;
}
