/* Author: Matteo Gianferrari
 * Data: 27/02/2022
 * Implementare la funzione che accetta come parametro un numero intero non negativo e manda 
 * in output il numero ottenibile invertendo le cifre nella sua rappresentazione in base 10.
 */
#include <stdio.h>
#include "inverti.h"

int main(void){
	unsigned int i;
	
	i = inverti(123);
	i = inverti(192837);
	i = inverti(73658);
	
	return 0;
}
