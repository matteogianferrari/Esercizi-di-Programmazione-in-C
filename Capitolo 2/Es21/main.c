/* Author: Matteo Gianferrari
 * Data: 27/02/2022
 * Implementare la funzione che accetta come parametri due stringhe e deve restituire un puntatore
 * ad una stringa (allocata dinamicamente nell'heap) formata dalla prima seguita dalla seconda.
 */
#include <stdlib.h>
#include "concatena.h"

int main(void){
	char *str, *s1 = "prima stringa", *s2 = "seconda stringa";
	
	str = concatena(s1, s2);
	free(str);
	
	return 0;
}
