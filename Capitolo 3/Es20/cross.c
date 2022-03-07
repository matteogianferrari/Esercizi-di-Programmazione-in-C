/* Author: Matteo Gianferrari
 * Data: 07/03/2022
 */
#include <stdio.h>
#include "cross.h"

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

/* void stampa_cross(unsigned int x)
 * Parameters:
 * unsigned char n;  dimensione di una diagonale
 
 * Purpose:
 * Stampa su stdout una croce di diagonale n
 *
 * Return:
 * void
 *
 * Notes:
 * Nessuna.
 */
void stampa_cross(unsigned int n){
	unsigned int i;
	
	if(x == 0){
		putchar('x');
		putchar('\n');
		return;
	}
	
	/*Parte superiore*/
	for(i = 0; i < x; i++){
		ripeti_char(' ', i);
		putchar('\\');
		ripeti_char(' ', 2 * (x - i) - 1);
		putchar('/');
		putchar('\n');
	}
	
	/*Parte centrale*/
	ripeti_char(' ', x);
	putchar('x');
	putchar('\n');
	
	/*Parte inferiore*/
	for(i = x; i > 0; i--){
		ripeti_char(' ', i - 1);
		putchar('/');
		ripeti_char(' ', 2 * (x - i) + 1);
		putchar('\\');
		putchar('\n');
	}
	
}
