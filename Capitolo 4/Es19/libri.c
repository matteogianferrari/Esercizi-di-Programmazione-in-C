/* Author: Matteo Gianferrari
 * Data: 30/03/2022
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

/* struct libro *filtra_libri(struct libro *plibri, size_t *pn, const char *cerca)
 * Parameters:
 * struct libro *plibri;  puntatore ad array di libro
 * size_t *pn;			  dimensione dell'array
 * const char *cerca;     stringa da ricercare
 * 
 * Purpose:
 * Ricerca tra i libri dell'array se e' presente la stringa fornita
 * tra i vari titoli dei libri, memorizzando i match in un nuovo array
 * allocato dinamicamente, salvando il numero di libri filtrati in pn.
 * 
 * Return:
 * Puntatore ad array di struttura dati libro.
 * 
 * Notes:
 * Nessuna.
 */
struct libro *filtra_libri(struct libro *plibri, size_t *pn, const char *cerca){
	struct libro *arr = NULL;
	size_t i, n = 0;
	
	for(i = 0; i < *pn; i++){
		if(strstr(plibri[i].titolo, cerca) != NULL){
			arr = realloc(arr, (n + 1) * sizeof(*arr));
			arr[n] = plibri[i];
			n++;
		}
	}
	
	*pn = n;
	
	return arr;
}
