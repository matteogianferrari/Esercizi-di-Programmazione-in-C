/* Author: Matteo Gianferrari
 * Data: 08/04/2022
 */
#include <stdio.h>
#include <stdlib.h>
#include "vettori.h"

/* struct vettore *vettori_leggi(FILE *f, size_t *n)
 * Parameters:
 * FILE *f;    puntatore a file 
 * size_t *n;  puntatore a dimensione dell'array
 *
 * Purpose:
 * Legge il file e memorizza in un array allocato dinamicamente i vettori 
 * di lunghezza specificata, allocando dinamicamente i dati letti.
 *
 * Return:
 * Puntatore ad array di vettori.
 *
 * Notes:
 * Nessuna.
 */
struct vettore *vettori_leggi(FILE *f, size_t *n){
	struct vettore temp, *ret = NULL;
	size_t i;
	
	*n = 0;
	
	while(1){
		if(fscanf(f, "%u", &temp.len) != 1)
			break;
		
		temp.data = (int *)malloc(temp.len * sizeof(*temp.data));
		
		for(i = 0; i < temp.len; i++)
			if(fscanf(f, "%u", &temp.data[i]) != 1)
				break;
		
		ret = (struct vettore *)realloc(ret, ((*n) + 1) * sizeof(*ret));
		ret[*n] = temp;
		(*n)++;
	}
	
	return ret;
}
