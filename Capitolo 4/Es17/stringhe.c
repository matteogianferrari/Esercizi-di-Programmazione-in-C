/* Author: Matteo Gianferrari
 * Data: 29/03/2022
 */
#include <stdio.h>
#include <stdlib.h>
#include "stringhe.h"

/* struct stringa *read_stringhe_bin(const char *filename, unsigned int *pn)
 * Parameters:
 * const char *filename;  stringa di caratteri
 * unsigned int *pn;      numero di stringhe lette
 * 
 * Purpose:
 * Legge il file binario e memorizza le stringhe in un
 * array di struttura dati stringa.
 * 
 * Return:
 * Puntatore a vettore di struttura dati stringa.
 * 
 * Notes:
 * Nessuna.
 */
struct stringa *read_stringhe_bin(const char *filename, unsigned int *pn){
	struct stringa *ret = NULL;
	struct stringa temp;
	FILE *f;
	
	*pn = 0;
	
	if((f = fopen(filename, "rb")) == NULL)
		return NULL;
	
	while(1){
		if(fread(&temp.length, sizeof(temp.length), 1, f) != 1)
			break;
		
		temp.s = malloc((temp.length + 1) * sizeof(*temp.s));
		
		if(fread(temp.s, sizeof(*temp.s), temp.length, f) != temp.length){
			free(temp.s);
			break;
		}
		temp.s[temp.length] = '\0';
		
		(*pn)++;
		ret = realloc(ret, *pn * sizeof(*ret));
		ret[*pn - 1] = temp;
	}
	
	fclose(f);
	
	return ret;
}
