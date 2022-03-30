/* Author: Matteo Gianferrari
 * Data: 30/03/2022
 */
#include <stdio.h>
#include <stdlib.h>
#include "libri.h"

/* struct libro *read_libro(const char *filename, size_t *pn)
 * Parameters:
 * const char *filename;  stringa di caratteri
 * size_t *pn;            numero di libri letti
 * 
 * Purpose:
 * Legge il file e memorizza i libri in un
 * array di struttura dati libro.
 * 
 * Return:
 * Puntatore ad array di struttura dati libro.
 * 
 * Notes:
 * %[^;] indica alla funzione di prendere in considerazione
 * i caratteri fino all'occorrenza di ';' esclusa.
 */
struct libro *read_libri(const char *filename, size_t *pn){
	FILE *f;
	struct libro *arr = NULL;
	struct libro temp;
	
	*pn = 0;
	
	if((f = fopen(filename, "r")) == NULL)
		return arr;
	
	while(fscanf(f, "%u;%[^;];%u\n", &temp.codice, temp.titolo, &temp.pagine) == 3){
		arr = realloc(arr, (*pn + 1) * sizeof(*arr));
		arr[*pn] = temp;
		(*pn)++;
	}
	
	fclose(f);
	
	return arr;
}
