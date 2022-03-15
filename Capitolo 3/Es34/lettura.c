/* Author: Matteo Gianferrari
 * Data: 15/03/2022
 */
#include <stdio.h>
#include <stdlib.h>
#include "lettura.h"

/* char *fgets_malloc(FILE *f)
 * Parameters:
 * FILE *f;                 puntatore a file
 *
 * Purpose:
 * Legge il file fornito fino a EOF o '\n' e alloca
 * dinamicamente una stringa contenente i caratteri incontrati.
 *
 * Return:
 * Se il file e' vuoto, quindi contiene solo EOF ritorna NULL.
 * Altrimenti ritorna il puntatore alla stringa.
 *
 * Notes:
 * Nessuna.
 */
char *fgets_malloc(FILE *f){
	char *str = NULL, c;
	size_t i = 0;
	
	while((c = getc(f)) != EOF && c != '\n'){
		i++;
		str = realloc(str, i);
		str[i - 1] = c;
	}
	
	if(c == EOF && str == NULL)
		return NULL;
	
	str = realloc(str, i + 1);
	str[i] = '\0';
	
	return str;
}
