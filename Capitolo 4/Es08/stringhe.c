/* Author: Matteo Gianferrari
 * Data: 01/04/2022
 */
#include <stdio.h>
#include <string.h>
#include "stringhe.h"

/* void stringhe_scrivi(const char *filename, const char **vs, size_t n)
 * Parameters:
 * const char *filename;  nome del file
 * const char **vs;		  puntatore ad array di puntatori di char
 * size_t n;			  dimensione dell'array
 *
 * Purpose:
 * Scrive sul file binario le stringhe dell'array comprese di terminatore.
 * 
 *
 * Return:
 * void
 *
 * Notes:
 * vs non e' mai NULL e tutti i suoi elementi non sono NULL.
 */
void stringhe_scrivi(const char *filename, const char **vs, size_t n){
	FILE *f;
	size_t i;
	
	if((f = fopen(filename, "wb")) == NULL)
		return;

	for(i = 0; i < n; i++)
		fwrite(vs[i], (strlen(vs[i]) + 1) * sizeof(*vs[i]), 1, f);
	
	fclose(f);
}
