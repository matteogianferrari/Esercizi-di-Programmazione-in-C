/* Author: Matteo Gianferrari
 * Data: 03/03/2022
 */
#include <stdlib.h>
#include "conta.h"

/* size_t conta_parole(const char *s)
 * Parameters:
 * const char *s;  puntatore a stringa di caratteri
 *
 * Purpose:
 * Conta il numero di parole nella stringa fornita
 *
 * Return:
 * Numero di parole.       
 *
 * Notes:
 * Nessuna.
 */
size_t conta_parole(const char *s){
	int in_word = 0;
	size_t count = 0;
	
	for(; *s == ' '; s++);
	
	for(; *s; s++){
		if(in_word == 0 && *s != ' '){
			in_word = 1;
			count++;
		}
		else if(in_word == 1 && *s == ' ')
			in_word = 0;
	}
	
	return count;
}
