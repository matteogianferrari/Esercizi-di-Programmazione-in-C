/* Author: Matteo Gianferrari
 * Data: 03/03/2022
 */
#include <stdlib.h>
#include "encrypt.h"

/* void encrypt(char *s, size_t n)
 * Parameters:
 * char *s;   puntatore a stringa di caratteri
 * size_t n;  dimensione della stringa
 
 * Purpose:
 * Cripta la stringa fornita facendo lo XOR bit a bit con 0xAA
 *
 * Return:
 * void     
 *
 * Notes:
 * Non e' necessaria la dimensione dell'array in quanto un ciclo eseguito sulla stringa si ferma col
 * terminatore, il ciclo prosegue fino a 0 perche' ogni valore sopra allo 0 in una espressione ritorna 1.
 */
void encrypt(char *s, size_t n){
	while(n--)
		*s++ ^= 0xAA;
}
