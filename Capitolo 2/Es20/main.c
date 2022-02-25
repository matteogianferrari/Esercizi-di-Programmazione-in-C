/* Author: Matteo Gianferrari
 * Data: 25/02/2022
 * Implementare la funzione che scriva sul file f (stdout) n onde. Se n = 0, la funzione stampa tre righe vuote. 
 */
#include <stdio.h>
#include "onde.h"

int main(void){
	int i;
	
	for(i = 0; i <= 10; i++)
		stampa_onde(stdout, i);
	
	return 0;
}
