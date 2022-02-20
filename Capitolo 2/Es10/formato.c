/* Author: Matteo Gianferrari
 * Data: 20/02/2022
 */
#include <stdio.h>
#include <string.h>
#include "formato.h"

/* int is_number(char c)
 * Parameters:
 * char c;  carattere da testare
 * 
 * Purpose:
 * Verifica se il carattere e' una cifra
 *
 * Return:
 * Se e' una cifra ritorna 1
 * Altrimenti ritorna 0                   
 *
 * Notes:
 * Nessuna.
 */
int is_number(char c){
	return c >= '0' && c <= '9';
}

/* int is_date(const char *s)
 * Parameters:
 * const char *s;    puntatore a stringa di caratteri
 * 
 * Purpose:
 * Verifica se la stringa e' in formato data
 *
 * Return:
 * Se e' in formato data ritorna 1
 * ALtrimenti ritorna 0                    
 *
 * Notes:
 * Nessuna.
 */
int is_date(const char *s){
	int giorno, mese, anno;
	
	if(s == NULL || strlen(s) != DATE_LEN)
		return 0;
		
	giorno = is_number(s[0]) && is_number(s[1]) && s[2] == '/';
	mese = is_number(s[3]) && is_number(s[4]) && s[5] == '/';
	anno = is_number(s[6]) && is_number(s[7]) && is_number(s[8]) && is_number(s[9]);
	
	return giorno && mese && anno;
}
