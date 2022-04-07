/* Author: Matteo Gianferrari
 * Data: 07/04/2022
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "stringhe.h"

/* char *parola_piu_lunga(const char *s)
 * Parameters:
 * const char *s;  puntatore a stringa
 *
 * Purpose:
 * Ricerca nella stringa la parola piu' lunga
 * e la memorizza in una stringa nuova.
 *
 * Return:
 * Puntatore a stringa.
 *
 * Notes:
 * Nessuna.
 */
char *parola_piu_lunga(const char *s){
	int i, j, len = 0, pos = 0;
	char *str;
	
	for(i = 0; s[i] != '\0'; i++){
		if(j < 0){
			if(s[i] != ' ')
				j = i;
		}
		else{
			if(s[i] == ' '){
				if(i - j > len){
					pos = j;
					len = i - j;
				}
				j = -1;
			}
		}
	}
	
	if(j >= 0){
		if(i - j > len){
			pos = j;
			len = i - j;
		}
	}
	
	str = (char *)malloc((len + 1) * sizeof(*str));
	memcpy(str, s + pos, len);
	str[len] = '\0';
	
	return str;
}
