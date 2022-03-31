/* Author: Matteo Gianferrari
 * Data: 03/03/2022
 */
#include <stdio.h>
#include "cerca.h"

/* char *cerca_primo(char *s, const char *list)
 * Parameters:
 * char *s;           puntatore a stringa di caratteri
 * const char *list;  puntatore a stringa di caratteri
 *
 * Purpose:
 * Cerca la prima occorrenza di un carattere di list in s
 *
 * Return:
 * Se s o list vuoti o nessun match ritorna NULL
 * Altrimenti ritorna puntatore a prima occurrenza in s          
 *
 * Notes:
 * Come specificato s e list non sono mai puntatori NULL, cicli scritti
 * in 2 diverse notazioni ristrette per lo scorrimento di stringhe.
 */
char *cerca_primo(char *s, const char *list){
	const char *p_start = list;
	
	while(*s++)
		for(list = p_start; *list != '\0'; list++)
			if(*s == *list)
				return s;
	
	return NULL;
}
