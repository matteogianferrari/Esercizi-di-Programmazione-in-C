/* Author: Matteo Gianferrari
 * Data: 25/02/2022
 */ 
#include <stdio.h>
#include "write_bin.h"

/* void write_bin(const double *values, size_t n, FILE *f)
 * Parameters:
 * const double *values;  puntatore ad array di double
 * size_t n;              numero di elementi
 * FILE *f; 			  puntatore a file
 *
 * Purpose:
 * Scrive in un file binario i valori dell'array fornito.
 *
 * Return:
 * void                    
 *
 * Notes:
 * Nessuna.
 */
void write_bin(const double *values, size_t n, FILE *f){
	fwrite(values, n * sizeof(*values), 1, f);
}
