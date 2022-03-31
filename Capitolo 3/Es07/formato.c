/* Author: Matteo Gianferrari
 * Data: 03/03/2022
 */
#include <string.h>
#include "formato.h"

/* static int is_letter(char c)
 * Parameters:
 * char c;  carattere della stringa
 *
 * Purpose:
 * Verifica se il carattere fornito e' una lettera esadecimale
 *
 * Return:
 * Se e' una lettere valida ritorna 1.
 * Altrimenti ritorna 0.        
 *
 * Notes:
 * Funzione statica perche' utilizzata da is_hex().
 */
static int is_letter(char c){
	return (c >= 'a' && c <= 'f') || (c >= 'A' && c <= 'F');
}

/* int is_hex(const char *s)
 * Parameters:
 * const char *s;  puntatore a stringa di caratteri
 *
 * Purpose:
 * Verifica se la stringa fornita e' in formato esadecimale
 *
 * Return:
 * Se s e' in formato valido ritorna 1.
 * Altrimenti ritorna 0.        
 *
 * Notes:
 * Nessuna.
 */
int is_hex(const char *s){
	int i;
	
	if(s == NULL)
		return 0;
		
	if(s[0] != '0' || (s[1] != 'x' && s[1] != 'X'))
		return 0;
	
	if(strlen(s) < HEX_MIN_LEN || strlen(s) > HEX_MAX_LEN)
		return 0;
		
	for(i = 2; s[i] != '\0'; i++)
		if(!is_letter(s[i]) && !isdigit(s[i]))
			return 0;
	
	return 1;
}
