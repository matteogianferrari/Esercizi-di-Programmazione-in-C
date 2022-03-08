/* Author: Matteo Gianferrari
 * Data: 08/03/2022
 * Implementare la funzione che invia a stdout un quadrato composto da un contorno di asterischi e riempito di spazi di lato lato.
 */
#include <stdio.h>
#include "quadrati.h"

int main(void){
	unsigned char i;
	
	for(i = 0; i < 10; i++)
		stampa_quadrato(i);

	return 0;
}
