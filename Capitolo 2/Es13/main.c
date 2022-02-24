/* Author: Matteo Gianferrari
 * Data: 24/02/2022
 * Implementare la funzione che accetta come parametro un puntatore a un file aperto in modalita' testuale e deve ritornare il numero di righe
 *  del file. Un file vuoto o senza caratteri '\n' ha una riga. Non e' possibile imporre alcun vincolo sulal massima lunghezza delle righe.
 */
#include <stdio.h>
#include "righe.h"

void test_case(char *filename, unsigned int n);

int main(void){
	test_case("file1.txt", 5);
	test_case("file2.txt", 507);
	test_case("file3.txt", 1);
	
	return 0;
}

void test_case(char *filename, unsigned int n){
	FILE *f;
	
	f = fopen(filename, "r");
	
	printf("Il file \"%s\" ha %u righe (dovrebbe essere %u).\n", filename, conta_righe(f), n);
	
	fclose(f);
}
