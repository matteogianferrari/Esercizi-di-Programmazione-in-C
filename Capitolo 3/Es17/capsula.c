/* Author: Matteo Gianferrari
 * Data: 06/03/2022
 */
#include <stdio.h>
#include "capsula.h"

/* static void ripeti_char(FILE *f, char c, unsigned char n)
 * Parameters:
 * FILE *f;	     puntatore a file aperto in scrittura
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

/* void capsula(FILE *f, unsigned char n)
 * Parameters:
 * FILE *f;	     puntatore a file aperto in scrittura
 * unsigned char n;  dimensione di un lato
 
 * Purpose:
 * Stampa su file una capsula ottagonale di lato n
 *
 * Return:
 * void
 *
 * Notes:
 * Utilizzata funzione di supporto per semplificare la comprensione.
 */
void capsula(FILE *f, unsigned char n){
	unsigned char i, j;
	
	/*Parte piatta superiore*/
	ripeti_char(f, ' ', n);
	ripeti_char(f, '_', n);
	putc('\n', f);
	
	/*Parte obliqua superiori*/
	for(i = 0; i < n; i++){
		ripeti_char(f, ' ', n - 1 - i);
		putc('/', f);
		ripeti_char(f, ' ', n + 2 * i);
		putc('\\', f);
		putc('\n', f);
	}
	
	/*Parte verticale*/
	for(i = 0; i < n; i++){
		putc('|', f);
		ripeti_char(f, ' ', n * 3 - 2);
		putc('|', f);
		putc('\n', f);
	}
	
	/*Parte obliqua inferiore*/
	for(i = n - 1; i > 0; i--){
		ripeti_char(f, ' ', n - 1 - i);
		putc('\\', f);
		ripeti_char(f, ' ', n + 2 * i);
		putc('/', f);
		putc('\n', f);
	}
	
	/*Ultima riga*/
	ripeti_char(f, ' ', n - 1);
	putc('\\', f);
	ripeti_char(f, '_', n);
	putc('/', f);
	putc('\n', f);
}
