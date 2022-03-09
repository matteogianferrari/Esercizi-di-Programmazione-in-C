/* Author: Matteo Gianferrari
 * Data: 08/03/2022
 */
#include <stdlib.h>
#include <string.h>
#include "alterna.h"

/* char *alterna(const char *s1, const char *s2)
 * Parameters:
 * const char *s1;  puntatore a stringa
 * const char *s2;  puntatore a stringa
 *
 * Purpose:
 * Alloca una stringa di dimensione s1 + s2 e ne concatena alternati il contenuto
 *
 * Return:
 * Se la allocazione fallisce ritorna NULL.
 * Altrimenti ritorna il puntatore alla stringa
 *
 * Notes:
 * Nessuna.
 */
char *alterna(const char *s1, const char *s2){
	char *p, *start;
	
	if((p = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(*p))) == NULL)
		return NULL;
	
	start = p;
	while(*s1 != '\0' || *s2 != '\0'){
		if(*s1 != '\0')
			*start++ = *s1++;
		if(*s2 != '\0')
			*start++ = *s2++;
	}
	*start = '\0';
	
	return p;
}
