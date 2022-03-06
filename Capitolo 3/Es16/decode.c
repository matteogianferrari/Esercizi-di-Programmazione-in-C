/* Author: Matteo Gianferrari
 * Data: 06/03/2022
 */
#include <stdio.h>
#include "decode.h"

/* static void print_n_char(char c, char n)
 * Parameters:
 * char c;  carattere da ripetere
 * char n;  numero di ripetizioni
 *
 * Purpose:
 * Stampa su stdout il carattere c n volte
 *
 * Return:
 * void
 *
 * Notes:
 * Funzione statica utilizzata da decode, utilizzato un char
 * per n perche' la ripetizione massima e' 9.
 */
static void print_n_char(char c, char n){
	char i;
	
	for(i = 0; i < n - '0'; i++)
		putchar(c);
}

/* void decode(FILE *f)
 * Parameters:
 * FILE *f;  puntatore a file aperto in lettura
 *
 * Purpose:
 * Decodifica il testo secondo le regole fornite
 *
 * Return:
 * void
 *
 * Notes:
 * Usata funzione di supporto per rendere piu' chiaro il codice.
 */
void decode(FILE *f){
	char c, d;
	
	while((c = getc(f)) != EOF){
		if(isdigit(c)){
			if((d = getc(f)) == EOF)
				return;
			print_n_char(d, c);	
		}
		else
			putchar(c);
	}
}
