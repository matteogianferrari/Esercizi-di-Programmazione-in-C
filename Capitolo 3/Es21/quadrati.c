/* Author: Matteo Gianferrari
 * Data: 08/03/2022
 */
#include <stdio.h>
#include "quadrati.h"

/* static void ripeti_char(char c, unsigned char n)
 * Parameters:
 * char c;           carattere da ripetere
 * unsigned char n;  numero di ripetizioni
 
 * Purpose:
 * Stampa su stdout il carattere c n volte
 *
 * Return:
 * void
 *
 * Notes:
 * Nessuna.
 */
static void ripeti_char(char c, unsigned char n){
	while(n-- > 0)
		putchar(c);
}

/* void stampa_quadrato(unsigned int lato)
 * Parameters:
 * unsigned char lato;  dimensione di un lato
 
 * Purpose:
 * Stampa su stdout un quadrato di lato lato
 *
 * Return:
 * void
 *
 * Notes:
 * Nessuna.
 */
void stampa_quadrato(unsigned int lato){
	unsigned int i;
	
	if(lato == 0)
		return;
	if(lato == 1){
		putchar('*');
		putchar('\n');
		return;
	}
	
	ripeti_char('*', lato);
	putchar('\n');
	
	for(i = 0; i < lato - 2; i++){
		putchar('*');
		ripeti_char(' ', lato - 2);
		putchar('*');
		putchar('\n');
	}
	
	ripeti_char('*', lato);
	putchar('\n');
}
