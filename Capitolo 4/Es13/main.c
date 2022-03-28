/* Author: Matteo Gianferrari
 * Data: 19/03/2022
 * Implementare la funzione che accetta come parametri il nome di un file da aprire in lettura binaria e un puntatore ad
 * una struct dati e deve leggere l'intero contenuto del file. La funzione alloca dinamicamente una zona di memoria in grado
 * di contenere i valori letti. La funzione ritorna 1 se e' riuscita ad aprire e leggere il file correttamente, 0 altrimenti.
 */
#include <stdio.h>
#include <stdlib.h>
#include "compress.h"

int main(void){
	int ret;
	struct dati d;
	
	ret = dati_read("dati1.bin", &d);
	ret = dati_read("dati2.bin", &d);
	
	return 0;
}
