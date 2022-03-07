/* Author: Matteo Gianferrari
 * Data: 06/03/2022
 * Implementare la funzione che scriva sul file f (passato gia' aperto in modalita' scrittura) una capsula ottagonale di lato n (n sara' sempre maggiore di 0).
 */
#include <stdio.h>
#include "capsula.h"

int main(void){
	unsigned char i;
	
	for(i = 1; i < 10; i++)
		capsula(stdout, i);

	return 0;
}
