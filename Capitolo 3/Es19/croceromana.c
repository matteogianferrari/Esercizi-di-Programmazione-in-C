/* Author: Matteo Gianferrari
 * Data: 07/03/2022
 */
#include <stdio.h>
#include "croceromana.h"

/* static void ripeti_char(FILE *f, char c, unsigned char n)
 * Parameters:
 * FILE *f;	         puntatore a file aperto in scrittura
 * char c;           carattere da ripetere
 * unsigned char n;  numero di ripetizioni
 
 * Purpose:
 * Stampa su file il carattere c n volte
 *
 * Return:
 * void
 *
 * Notes:
 * Nessuna.
 */
static void ripeti_char(FILE *f, char c, unsigned char n){
	while(n-- > 0)
		putc(c, f);
}

/* void croce_romana(FILE *f, unsigned char n)
 * Parameters:
 * FILE *f;	         puntatore a file aperto in scrittura
 * unsigned char n;  dimensione del lato minore
 
 * Purpose:
 * Stampa su file la croce romana con lato inferiore n
 *
 * Return:
 * void
 *
 * Notes:
 * Utilizzata funzione di supporto per semplificare la comprensione,
 * non e' necessario error checking.
 */
void croce_romana(FILE *f, unsigned char n){
	unsigned int i;
	
	/*Parte superiore*/
	for(i = 0; i < n; i++){
		ripeti_char(f, ' ', n * 2);
		putc('|', f);
		putc('\n', f);
	}
	
	/*Parte orizzontale*/
	ripeti_char(f, '-', n * 2);
	putc('+', f);
	ripeti_char(f, '-', n * 2);
	putc('\n', f);
	
	/*Parte inferiore*/
	for(i = 0; i < n * 2; i++){
		ripeti_char(f, ' ', n * 2);
		putc('|', f);
		putc('\n', f);
	}
}
