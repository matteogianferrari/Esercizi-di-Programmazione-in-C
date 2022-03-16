/* Author: Matteo Gianferrari
 * Data: 15/03/2022
 */
#include <stdio.h>
#include <stdlib.h>
#include "vettori.h"

/* int vettore_leggi(FILE *f, struct vettore *v)
 * Parameters:
 * FILE *f;            puntatore a file
 * struct vettore *v;  puntatore a struttura vettore
 *
 * Purpose:
 * Legge il file fornito il numero di elementi, per poi
 * leggere il numero di elementi e inserirli nell'array
 * di dimensione allocata dinamicamente.
 *
 * Return:
 * Se vi sono errori di lettura ritorna 0.
 * Altrimenti ritorna 1.
 *
 * Notes:
 * Nessuna.
 */
int vettore_leggi(FILE *f, struct vettore *v){
	if((fread(&v->size, sizeof(v->size), 1, f)) != 1)
		return 0;
	
	v->data = malloc(v->size * sizeof(double));
	if((fread(v->data, 8, v->size, f)) != v->size)
		return 0;
	
	return 1;
}
