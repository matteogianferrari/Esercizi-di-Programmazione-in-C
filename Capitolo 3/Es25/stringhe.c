/* Author: Matteo Gianferrari
 * Data: 10/03/2022
 */
#include <stdlib.h>
#include <string.h>
#include "stringhe.h"

/* static int linear_search(char *str, char c, size_t len)
 * Parameters:
 * char *str;   puntatore a stringa di caratteri
 * char c;      carattere da ricercare
 * size_t len;  dimensione della stringa
 *
 * Purpose:
 * Ricerca se il carattere fornito e' presente nella stringa fornita
 *
 * Return:
 * Se il carattere e' presente ritorna 1.
 * Altrimenti ritorna 0.
 *
 * Notes:
 * Nessuna.
 */
static int linear_search(char *str, char c, size_t len){
	size_t i;
			
	for(i = 0; i < len; i++)
		if(str[i] == c)
			return 1;

	return 0;
}

/* char *unici(const char *s)
 * Parameters:
 * const char *s;  puntatore a stringa
 *
 * Purpose:
 * Rimuove i caratteri multipli dalla stringa fornita e 
 * memorizza i restanti in una stringa allocata dinamicamente
 *
 * Return:
 * Se la allocazione fallisce ritorna NULL.
 * Se la stringa fornita e' vuota ritorna "".
 * Altrimenti ritorna il puntatore alla stringa.
 *
 * Notes:
 * Utilizzata aritmetica dei puntatori per ottimizzare la funzione,
 * s non sara' mai NULL per definizione dell'esercizio.
 */
char *unici(const char *s){
	char *new_str, *p_new_str;
	const char *p_s = s;
	
	if((new_str = (char *)malloc((strlen(p_s) + 1) * sizeof(*new_str))) == NULL)		
		return NULL;
	p_new_str = new_str;
	
	if(*p_s == '\0'){		//se str e' vuota
		*p_new_str = '\0';
		return new_str;
	}
	
	for(; *p_s != '\0'; p_s++)
		if(!linear_search(new_str, *p_s, p_s - s))
			*p_new_str++ = *p_s;
	*p_new_str = '\0';
	
	new_str = realloc(new_str, (p_new_str + 1 - new_str) * sizeof(*new_str));
	
	return new_str;
}
