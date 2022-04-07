/* Author: Matteo Gianferrari
 * Data: 07/04/2022
 */
#include "stringhe.h"
#include <string.h>

/* void accoda_cifra(char **vs, unsigned char n)
 * Parameters:
 * char **vs;        puntatore ad array di puntatori di char
 * unsigned char n;  numero da accodare
 *
 * Purpose:
 * Accoda la cifra fornita negli array.
 *
 * Return:
 * void
 *
 * Notes:
 * Nessuna.
 */
void accoda_cifra(char **vs, unsigned char n){
	char i;
	
	const char *num[] = {
		" _     _  _     _  _  _  _  _ ",
		"| |  | _| _||_||_ |_   ||_||_|",
		"|_|  ||_  _|  | _||_|  ||_| _|"
	};
	
	for(i = 0; i < NUM_ALTEZZA; i++)
		strncat(vs[i], num[i] + n * NUM_LARGHEZZA, NUM_LARGHEZZA);
}
