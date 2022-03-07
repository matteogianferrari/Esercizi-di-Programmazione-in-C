/* Author: Matteo Gianferrari
 * Data: 07/03/2022
 */
#include <stdio.h>
#include "cono.h"

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

/* void stampa_cono(unsigned int h)
 * Parameters:
 * unsigned char h;  altezza del cono
 
 * Purpose:
 * Stampa su stdout un cono di altezza h
 *
 * Return:
 * void
 *
 * Notes:
 * Utilizzata funzione di supporto per semplificare la comprensione.
 */
void stampa_cono(unsigned int h){
	unsigned int i;
	
  /*Punta*/
	ripeti_char(' ', h + 1);
	putchar('_');
	putchar('\n');
	
  /*Lati*/
	for(i = 0; i < h - 1; i++){
		ripeti_char(' ', h - i);
		putchar('/');
		ripeti_char(' ', 1 + 2 * i);
		putchar('\\');
		putchar('\n');
	}
	
  /*Base*/
	putchar('_');
	putchar('/');
	ripeti_char(' ', (h - 1) * 2 + 1);
	putchar('\\');
	putchar('_');
	putchar('\n');
}
