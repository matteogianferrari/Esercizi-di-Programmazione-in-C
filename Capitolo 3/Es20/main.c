/* Author: Matteo Gianferrari
 * Data: 07/03/2022
 * Implementare la funzione che invia a stdout una X composta da un carattere 'x' al centro e caratteri '\' e '/' sulle 
 * diagonali. Ogni semi-diagonale deve essere composta di n caratteri. Con n = 0 la funzione stampa solo 'x'.
 */
#include <stdio.h>
#include "cross.h"

int main(void){
	unsigned char i;
	
	for(i = 0; i < 10; i++)
		stampa_cross(i);

	return 0;
}
