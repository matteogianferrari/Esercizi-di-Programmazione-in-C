/* Author: Matteo Gianferrari
 * Data: 01/04/2022
 * Implementare la funzione che accetta il nome di un file da aprire in scrittura binaria e un puntatotre ad un vettore
 * vs di n puntatori a stringhe (ogni stringa puo' avere lunghezza variabile). La funzione deve scrivere i caratteri delle
 * stringhe sul file includendo anche il terminatore dopo ognuna. vs non e' mai NULL e tutti i suoi elementi non sono NULL.
 */
#include <stdio.h>
#include "stringhe.h"

int main(void){
	const char *vs[] = {
		"prima",
		"seconda",
		"terza"
	};
	
	stringhe_scrivi("stringhe1.bin", vs, sizeof(vs) / sizeof(vs[0]));
	
	return 0;
}
