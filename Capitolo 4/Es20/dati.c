/* Author: Matteo Gianferrari
 * Data: 30/03/2022
 */
#include <stdio.h>
#include <stdlib.h>
#include "dati.h"

/* struct dato *read_dati(const char *filename, unsigned int *pn)
 * Parameters:
 * const char *filename;  nome del file
 * unsigned int *pn;      dimensione dell'array
 * 
 * Purpose:
 * Legge il file e memorizza i dati in un array allocato
 * dinamicamente e memorizza la dimensione nel puntatore fornito.
 * 
 * Return:
 * Puntatore ad array di struttura dati dato.
 * 
 * Notes:
 * Nessuna.
 */
struct dato *read_dati(const char *filename, unsigned int *pn){
	struct dato *arr = NULL;
	struct dato temp;
	FILE *f;
	
	*pn = 0;
	
	if((f = fopen(filename, "r")) == NULL)
		return arr;
	
	while(fscanf(f, "%lf %u\n", &temp.valore, &temp.classe) == 2){
		arr = realloc(arr, (*pn + 1) * sizeof(*arr));
		arr[*pn] = temp;
		(*pn)++;
	}
	
	fclose(f);
	
	return arr;
}
