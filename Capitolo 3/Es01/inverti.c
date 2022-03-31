/* Author: Matteo Gianferrari
 * Data: 27/02/2022
 */
#include <stdio.h>
#include "inverti.h"

/* unsigned int inverti(unsigned int i)
 * Parameters:
 * unsigned int i;  numero da invertire
 *
 * Purpose:
 * Inverte le cifre del numero passato come parametro
 *
 * Return:
 * void          
 *
 * Notes:
 * Nessuna.
 */
unsigned int inverti(unsigned int i){
	unsigned int ris = 0;

	while(i > 0){
		ris = ris * 10 + (i % 10);
		i /= 10;
	}
	
	return ris;
}
