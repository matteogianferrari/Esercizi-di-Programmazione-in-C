/* Author: Matteo Gianferrari
 * Data: 25/02/2022
 */
#include <stdio.h>
#include "onde.h"

/* void stampa_onde(FILE *f, int n)
 * Parameters:
 * FILE *f;  puntatore a file
 * int n;    numero di onde
 *
 * Purpose:
 * Stampa su stdout le onde
 *
 * Return:
 * void             
 *
 * Notes:
 * Nessuna.
 */
void stampa_onde(FILE *f, int n){
	int i;
	
	for(i = 0; i < n; i++)
		fprintf(f, " -    ");
	putc('\n', f);
	for(i = 0; i < n; i++)
		fprintf(f, "/ \\   ");
	putc('\n', f);
	for(i = 0; i < n; i++)
		fprintf(f, "   \\_/");
	putc('\n', f);
}
