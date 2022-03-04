/* Author: Matteo Gianferrari
 * Data: 04/03/2022
 */
#include <stdlib.h>
#include "conversione.h"

/* void itob(unsigned int x, char *sz, size_t n)
 * Parameters:
 * unsigned int x;  numero da convertire
 * char *sz;        puntatore a stringa
 * size_t n;		numero di bit
 
 * Purpose:
 * Converte il numero fornito in binario di lunghezza n bit
 *
 * Return:
 * void     
 *
 * Notes:
 * Non e' necessario effettuare error checking sul puntatore in quanto
 * specificato che sara' sempre valido.
 */
void itob(unsigned int x, char *sz, size_t n){
	while(n-- > 0)
		*sz++ = (x >> n & 1) + '0';
	
	*sz = '\0';
}
