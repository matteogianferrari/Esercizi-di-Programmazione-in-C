/* Author: Matteo Gianferrari
 * Data: 07/03/2022
 * Implementare la funzione che scriva su stdout un cono composto di due caratteri '_' alla base, caratteri '\' e '/' sulle diagonali e un altro '_' sulla punta.
 * Il parametro h (che sara' sempre maggiore di 0) regola l'altezza del cono, ovvero il numero di coppie di barre diagonali (un cono sara' h + 1 righe).
 */
#include <stdio.h>
#include "cono.h"

int main(void){
	unsigned char i;
	
	for(i = 1; i < 10; i++)
		stampa_cono(i);

	return 0;
}
