/* Author: Matteo Gianferrari
 * Data: 15/03/2022
 * Implementare la funzione che accetta come parametro un puntatore a file aperto in lettura e deve leggere tutti i caratteri fino al primo a capo o fino alla fine del file.
 * La funzione ritorna una stringa allocata dinamicamente nell'heap, contenete i caratteri letti. Il carattere a capo, se presente, non deve essere inserito nella stringa ritornata.
 * Se quindi viene letta una riga contenente solo il carattere a capo, la funzione ritorna un puntatore ad un'area di memoria grande 1 byte contenente solo il terminatore.
 * Se invece la funzione non riesce a leggere nessun carattere, la funzione ritorna NULL, non allocando quindi nulla.
 */
#include <stdio.h>
#include <stdlib.h>
#include "lettura.h"

int main(void){
	char *p;
	FILE *f;

	if((f = fopen("file1.txt", "r")) == NULL){
		perror("file1.txt");
		exit(-1);
	}
	
	while((p = fgets_malloc(f)) != NULL){
		printf("%s\n", p);
		free(p);
	}
	
	fclose(f);
	
	return 0;
}
