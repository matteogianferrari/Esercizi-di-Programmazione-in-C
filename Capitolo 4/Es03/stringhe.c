/* Author: Matteo Gianferrari
 * Data: 07/04/2022
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stringhe.h"

/* char *sostituisci(const char *str, const char *vecchia, const char *nuova)
 * Parameters:
 * const char *str;      puntatore a stringa
 * const char *vecchia;  puntatore a stringa
 * const char *nuova;    puntatore a stringa
 *
 * Purpose:
 * Sostituisce nella stringa str l'occorrenza vecchia con nuova.
 *
 * Return:
 * Puntatore a stringa
 *
 * Notes:
 * Nessuna.
 */
char *sostituisci(const char *str, const char *vecchia, const char *nuova){
	size_t ssize = 0, nsize, vsize;
	const char *cur, *prev = str;
	char *s = NULL;
	
	if(str == NULL || vecchia == NULL || nuova == NULL)
		return NULL;
	
	if(*vecchia == 0){
		s = (char *)malloc(strlen(str) + 1);
		return strcpy(s, str);
	}
	
	nsize = strlen(nuova);
	vsize = strlen(vecchia);
	
	while((cur = strstr(prev, vecchia)) != NULL){
		s = realloc(s, ssize + cur - prev + nsize + 1);
		
		strncpy(s + ssize, prev, cur - prev);
		ssize += cur - prev;
		strcpy(s + ssize, nuova);
		ssize += nsize;
		prev = cur + vsize;
	}
	
	s = realloc(s, ssize + strlen(prev) + 1);
	strcpy(s + ssize, prev);
	
	return s;
}
