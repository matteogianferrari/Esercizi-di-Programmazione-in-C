/* Author: Matteo Gianferrari
 * Data: 01/04/2022
 */
#include <stdio.h>
#include <stdint.h>
#include "istogramma.h"

/* void disegna(uint8_t *h, size_t n, FILE *f_out)
 * Parameters:
 * uint8_t *h;   array di valori
 * size_t n;     dimensione dell'array
 * FILE *f_out;  puntatore a file
 *
 * Purpose:
 * Scrive su file l'istogramma con i
 * valori presenti nell'array.
 *
 * Return:
 * void
 *
 * Notes:
 * Nessuna.
 */
void disegna(uint8_t *h, size_t n, FILE *f_out){
	size_t i, j;
	uint8_t max = 0;
	
	for(i = 0; i < n; i++)
		if(h[i] > max)
			max = h[i];
	
	for(j = max; j > 0; j--){
		for(i = 0; i < n; i++){
			if(h[i] >= j)
				putc('|', f_out);
			else
				putc('.', f_out);
		}
		putc('\n', f_out);
	}
}
