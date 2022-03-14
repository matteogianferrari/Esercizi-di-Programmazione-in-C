/* Author: Matteo Gianferrari
 * Data: 14/03/2022
 */
#include <stdlib.h>
#include <string.h>
#include "vettori.h"

/* struct vettore *merge_vettori(const struct vettore *a, const struct vettore *b)
 * Parameters:
 * const struct vettore *a;  puntatore a struct vettore
 * const struct vettore *b;  puntatore a struct vettore
 *
 * Purpose:
 * Alloca dinamicamente un vettore di lunghezza a + b e 
 * vi concatena il contenuto all'interno di esso.
 *
 * Return:
 * Se vengono generati errori ritorna NULL.
 * Altrimenti ritorna il puntatore al vettore allocato. 
 *
 * Notes:
 * Utilizzata la funzione memcpy per ottimizzare il codice.
 */
struct vettore *merge_vettori(const struct vettore *a, const struct vettore *b){
	struct vettore *vect;
	
	if((vect = (struct vettore *)malloc(sizeof(*vect))) == NULL)
		return NULL;
	
	vect->n = a->n + b->n;
	
	if((vect->data = (double *)malloc(vect->n * sizeof(*vect->data))) == NULL)
		return NULL;
	
	memcpy(vect->data, a->data, a->n * sizeof(double));				//memcpy copies the values of num bytes from the location pointed to  
	memcpy(vect->data + a->n, b->data, b->n * sizeof(double));		//by source directly to the memory block pointed to by destination.
	
	return vect;
}
