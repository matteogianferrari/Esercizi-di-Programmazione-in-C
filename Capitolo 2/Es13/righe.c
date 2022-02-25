/* Author: Matteo Gianferrari
 * Data: 24/02/2022
 */
#include <stdio.h>
#include "righe.h"

/* unsigned int conta_righe(FILE *f)
 * Parameters:
 * FILE *f;  puntatore a file
 *
 * Purpose:
 * Conta le righe di un file di testo
 *
 * Return:
 * Numero di righe                     
 *
 * Notes:
 * Il contatore parte da 1 per contare l'ultima riga.
 */
unsigned int conta_righe(FILE *f){
	unsigned int count = 1;
	char c;
	
	while((c = getc(f)) != EOF)
		if(c == '\n')
			count++;
	
	return count;	
}
