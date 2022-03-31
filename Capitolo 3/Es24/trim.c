/* Author: Matteo Gianferrari
 * Data: 10/03/2022
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "trim.h"

/* char *trim(const char *s)
 * Parameters:
 * const char *s;  stringa di caratteri
 *
 * Purpose:
 * Rimuovi gli spazi iniziali e finali dalla stringa fornita
 * e memorizza i caratteri rimanenti in una nuova stringa.
 *
 * Return:
 * Se s == NULL ritorna NULL.
 * Se s e' vuota ritorna una stringa vuota.
 * Altrimenti ritorna la stringa elaborata.
 *
 * Notes:
 * Nessuna.
 */
char *trim(const char *s){
	size_t start, end, i, j;
	char *ret;
	
	if(s == NULL)
		return NULL;
		
	if(strlen(s) == 0){
		ret = malloc(1 * sizeof(*ret));
		ret[0] = '\0';
		return ret;
	}
	
	for(start = 0; s[start] == ' '; start++);		
	for(end = strlen(s) - 1; end > start && s[end] == ' '; end--); 
	
	if((ret = (char *)malloc((end - start + 2) * sizeof(*ret))) == NULL)		
		return NULL;
	
	for(i = start; i <= end; i++)
		ret[i - start] = s[i];
	
	ret[i - start] = '\0';

	return ret;
}
