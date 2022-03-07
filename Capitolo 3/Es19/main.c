/* Author: Matteo Gianferrari
 * Data: 07/03/2022
 * Implementare la funzione che scriva sul file f (passato gia' aperto in modalita' scrittura) una croce romana, rappresentata con i simboli ASCII.
 * Il parametro n indica la lunghezza del braccio superiore, mentre gli altri bracci saranno lunghi il doppio. n sara' sempre maggiore di 0.
 */
#include <stdio.h>
#include "croceromana.h"

int main(void){
	unsigned char i;
	
	for(i = 1; i < 10; i++)
		croce_romana(stdout, i);

	return 0;
}
