/* Author: Matteo Gianferrari
 * Data: 20/02/2022
 */
#include <stdio.h>
#include <string.h>
#include "conta.h"

/* size_t conta_occorrenze(const char *testo, const char *stringa)
 * Parameters:
 * const char *testo;    puntatore a stringa di caratteri
 * const char *stringa;  puntatore a stringa di caratteri
 * 
 * Purpose:
 * Conta il numero di presenze del contenuto di stringa in testo
 *
 * Return:
 * Numeri di occorrenze di stringa in testo                    
 *
 * Notes:
 * Il puntatore ritornato da strstr viene memorizzato in testo per
 * aggiornare la posizione dell'occorrenza.
 */
size_t conta_occorrenze(const char *testo, const char *stringa){
	size_t c = 0;

	if(testo == NULL || stringa == NULL || *testo == '\0' || *stringa == '\0')
		return 0;
	
	while((testo = strstr(testo, stringa)) != NULL){
		testo++;
		c++;
	}
	
	return c;
}
