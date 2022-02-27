/* Author: Matteo Gianferrari
 * Data: 27/02/2022
 */
#include <stdlib.h>
#include <string.h>
#include "concatena.h"

/* char *concatena(const char *s1, const char *s2)
 * Parameters:
 * const char *s1;  puntatore a stringa di caratteri
 * const char *s2;  puntatore a stringa di caratteri
 *
 * Purpose:
 * Alloca dinamicamente una stringa di dimensione s1 + s2
 * e ne copia il contenuto dentro
 *
 * Return:
 * puntatore a stringa di caratteri          
 *
 * Notes:
 * Possibilita' di scrivere la funzione senza utilizzare le
 * built-in function di string.h.
 */
char *concatena(const char *s1, const char *s2){
	char *str = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(*str));
	
	if(str == NULL)
		return NULL;
	
	strcpy(str, s1);
	strcat(str, s2);
	
	return str;
}
