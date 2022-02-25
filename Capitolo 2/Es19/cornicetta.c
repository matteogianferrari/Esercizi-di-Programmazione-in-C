/* Author: Matteo Gianferrari
 * Data: 25/02/2022
 */
#include <stdio.h>
#include <string.h>
#include "cornicetta.h"

/* void stampa_cornicetta(const char *s)
 * Parameters:
 * const char *s;  puntatore a stringa di caratteri
 *
 * Purpose:
 * Stampa su stdout la stringa incorniciata
 *
 * Return:
 * void             
 *
 * Notes:
 * La stringa non sara' mai NULL da consegna, viene
 * ipotizzato che non sono presenti '\n' nella stringa.
 */
void stampa_cornicetta(const char *s){
	int i, n_trat;
	
	n_trat = strlen(s) + PADDING;
	
	putchar('/');
	for(i = 0; i < n_trat; i++)
		putchar('-');
		
	printf("\\\n| %s |\n\\", s);
	
	for(i = 0; i < n_trat; i++)
		putchar('-');
	printf("/\n");
}
