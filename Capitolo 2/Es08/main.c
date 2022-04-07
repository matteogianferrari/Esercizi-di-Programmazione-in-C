/* Author: Matteo Gianferrari
 * Data: 17/02/2022
 * Implementare la funzione che accetta come parametro una stringa zero terminata e deve restituire il numero di caratteri <spazio>
 * presenti nella stessa. Ad esempio, data la stringa "prova stringa in cui contare gli spazi" la funzione deve ritornare il valore 6.
 */
#include <stdio.h>
#include "contaspazi.h"

int main(void){
	size_t count;

	count = conta_spazi("uno spazio");
	count = conta_spazi("due spazi ");
	count = conta_spazi(" spazioprima");
	count = conta_spazi("zerospazi");
	count = conta_spazi("   ");
	count = conta_spazi("");	
	
	return 0;
}
