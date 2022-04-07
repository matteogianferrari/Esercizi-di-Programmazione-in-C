/* Author: Matteo Gianferrari
 * Data: 07/04/2022
 * Implementare la funzione che accetta come parametro una stringa e deve restituire un puntatore ad una nuova stringa contenente
 * una copia della parola piu' lunga presente all'interno della stringa sz, dove con "parola" intendiamo una sequenza contigua di
 * caratteri diversi da spazio. Se ci sono piu' parole della lunghezza massima, la funzione ritorna la prima incontrata.
 */
#include "stringhe.h"
#include <stdlib.h>
#include <stdio.h>

int main(void){
	char *ret;
	
	ret = parola_piu_lunga("Ciao questa e' una prova.");
	free(ret);
	
	ret = parola_piu_lunga("   Ciao  questa  e'  una  prova.  ");
	free(ret);
	
	ret = parola_piu_lunga("corta corta lungaaaaaaa");
	free(ret);
	
	ret = parola_piu_lunga("corta    corta     lungaaaaaaa      ");
	free(ret);
	
	ret = parola_piu_lunga("   lungaaaaaaa    corta     corta");
	free(ret);
	
	return 0;
}
