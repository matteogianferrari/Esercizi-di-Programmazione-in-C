/* Author: Matteo Gianferrari
 * Data: 17/02/2022
 */
#include <stdio.h>
#include "contaspazi.h"

/* size_t conta_spazi(const char *s)
 * Parameters:
 * const char *s;  puntatore a stringa di caratteri
 * 
 * Purpose:
 * Conta il numero di spazi presenti nella stringa
 *
 * Return:
 * Numeri di spazi                      
 *
 * Notes:
 * Nessuna.
 */
size_t conta_spazi(const char *s){
	size_t c = 0;
	
	while(*s){
		if(*s++ == ' ')
			c++;
	}
	
	return c;
}
