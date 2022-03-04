/* Author: Matteo Gianferrari
 * Data: 04/03/2022
 */
#include <stdio.h>
#include "histo.h"

/* void histogram(const char *values, size_t n)
 * Parameters:
 * const char *values;   puntatore a stringa
 * size_t n;             dimensione della stringa
 
 * Purpose:
 * Stampa per ogni elemento nell'array tanti 
 * '*' quanto e' il valore dell'elemento
 *
 * Return:
 * void     
 *
 * Notes:
 * Non e' necessaria la dimensione dell'array in quanto un    
 * ciclo eseguito sulla stringa si ferma col terminatore.
 */
void histogram(const char *values, size_t n){
	char i;
	
	if(values == NULL)
		return;
		
	while(n-- > 0){
		for(i = 0; i < *values; i++)
			putchar('*');
		putchar('\n');
		values++;
	}
}
