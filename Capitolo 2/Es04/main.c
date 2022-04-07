/* Author: Matteo Gianferrari
 * Data: 16/02/2022
 * Implementare la funzione che restituisce il semifattoriale di n. Se n e' negativo, deve restituire -1. Non e' consentito
 * l'utilizzo di librerie esterne. Utilizzare duble per tutti i calcoli , per avere una precisione sufficiente.
 */
#include "matematica.h"

int main(void){
	double d;
	
	d = semifattoriale(0);
	d = semifattoriale(1);
	d = semifattoriale(8);
	d = semifattoriale(9);
	d = semifattoriale(-8);
	d = semifattoriale(127);
		
	return 0;
}
