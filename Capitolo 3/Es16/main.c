/* Author: Matteo Gianferrari
 * Data: 06/03/2022
 * Implementare la funzione che accetta un puntatore a FILE aperto in modalita' lettura testuale e deve decodificare 
 * il contenuto criptato e inviare la decodifica su stdout. La decodifica utilizza le seguenti regole:
 * 1. se il prossimo carattere e' compreso tra 1 e 9, devo leggere un altro carattere e inviarlo in output rispettivamente n volte;
 * 2. altrimenti lo invio direttamente in output.
 */
#include <stdio.h>
#include "decode.h"

int main(void){
	FILE *f;
	
	f = fopen("file1.txt", "r");
	
	decode(f);
	
	fclose(f);
	
	return 0;
}
