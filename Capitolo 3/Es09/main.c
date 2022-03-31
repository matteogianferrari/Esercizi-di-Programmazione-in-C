/* Author: Matteo Gianferrari
 * Data: 03/03/2022
 * Implementare la funzione che accetta una sequenza s di n char e la codifica sostituendo ad ogni char il suo valore trasformato 
 * con uno XOR bit a bit col il valore essadecimale 0xAA. Per le proprieta' dello XOR, l'operazione e' invertibile.
 */
#include <stdlib.h>
#include "encrypt.h"

int main(void){
	char s[] = "Questa e' una prova di stringa da criptare.";
	size_t n = sizeof(s);
	
	encrypt(s, n);
	encrypt(s, n);
	
	return 0;
}
