/* Author: Matteo Gianferrari
 * Data: 29/03/2022
 */
#include <stdio.h>
#include <stdlib.h>
#include "punti.h"

/* struct pixel *read_pizels(FILE *f, size_t *n)
 * Parameters:
 * FILE *f;    puntatore a file
 * size_t *n;  puntatore a dimensione del vettore
 *
 * Purpose:
 * Legge il file binario e memorizza i pixel  
 * in un array di struttura dati pixel.
 *
 * Return:
 * Puntatore a vettore di struttura dati pixel.
 *
 * Notes:
 * Si puo' utilizzare sizeof(temp.rgb) perche' array a dimensione fissa.
 */
struct pixel *read_pizels(FILE *f, size_t *n){
	struct pixel *v_pixel = NULL;
	struct pixel temp;
	
	*n = 0;
	while(1){
		if(fread(&temp.x, sizeof(temp.x), 1, f) != 1)
			break;
		if(fread(&temp.y, sizeof(temp.y), 1, f) != 1)
			break;
		if(fread(temp.rgb, sizeof(temp.rgb), 1, f) != 1)
			break;
		
		(*n)++;
		v_pixel = realloc(v_pixel, *n * sizeof(*v_pixel));
		v_pixel[*n - 1] = temp;
	}
	
	return v_pixel;
}
