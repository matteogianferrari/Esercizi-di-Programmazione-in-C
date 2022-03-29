/* Author: Matteo Gianferrari
 * Data: 29/03/2022
 * Implementare la funzione che accetta come parametro un nome di file che deve essere aperto in lettura binaria e un puntatore ad una variabile
 * di tipo unsigned int in cui si dovra' inserire il numero di stringhe presenti nel file. Il file e' composto di un sequenza di elementi di
 * lunghezza variabile in cui un vyte indica la unghezza n della stringa e di seguito ci sono n byte contenenti i caratteri della stringa. La
 * funzione deve ritornare un puntatore ad una zona di memoria (allocata dinamicamente nell'heap) contenente tutte le stringhe lette dal file.
 * Il numero di stringhe non e' noto a priori e non puo' essere vincolato dal codice. Anche l'elemento s di stringa deve essere allocato dinamicamente nell'heap.
 */
#include <stdio.h>
#include <stdlib.h>
#include "stringhe.h"

int main(void){
	struct stringa *ret;
	unsigned int i, n;
	
	ret = read_stringhe_bin("stringhe2.bin", &n);
	
	for(i = 0; i < n; i++)
		printf("%s\n", ret[i].s);
	
	for(i = 0; i < n; i++)
		free(ret[i].s);
	free(ret);
	
	return 0;
}
