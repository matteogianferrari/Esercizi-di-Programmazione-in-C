/* Author: Matteo Gianferrari
 * Data: 08/03/2022
 */
#include <stdlib.h>
#include <string.h>
#include "stringhe.h"

/* char *rimuovi_multipli(const char *str)
 * Parameters:
 * const char *str;  puntatore a stringa
 *
 * Purpose:
 * Rimuove i caratteri multipli consecutivi dalla stringa fornita 
 * e memorizza i restanti in una stringa allocata dinamicamente
 *
 * Return:
 * Se la allocazione fallisce o il puntatore fornito e' NULL ritorna NULL.
 * Se la stringa fornita e' vuota ritorna "".
 * Altrimenti ritorna il puntatore alla stringa.
 *
 * Notes:
 * Utilizzata aritmetica dei puntatori per ottimizzare la funzione.
 */
char *rimuovi_multipli(const char *str){
	char *new_str, *p_new_str;
	const char *p_str = str;
	
	if(p_str == NULL)		//se str e' NULL
		return NULL;
	
	if((new_str = (char *)malloc((strlen(p_str) + 1) * sizeof(*new_str))) == NULL)		
		return NULL;
	
	if(*p_str == '\0'){		//se str e' vuota
		*new_str = '\0';
		return new_str;
	}
	
	p_new_str = new_str;			//puntatore al blocco di memoria allocato dinamicamente
	*p_new_str++ = *p_str++;		//assegnazione del primo carattere 

	for(; *p_str; p_str++)				//p_str++ effettuato a fine ciclo in ogni caso
		if(*p_str != *(p_str - 1))
			*p_new_str++ = *p_str;
	*p_new_str = '\0';					//inserito terminatore in posizione giusta per incremento nel ciclo 
	
	new_str = realloc(new_str, (p_new_str + 1 - new_str) * sizeof(*new_str));		//il + 1 include il terminatore

	return new_str;
}
