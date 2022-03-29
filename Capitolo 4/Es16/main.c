/* Author: Matteo Gianferrari
 * Data: 29/03/2022
 * Implementare la funzione che accetta un puntatore a file aperto in lettura binaria e un puntatore ad una variabile in cui inserire il numero
 * di pixel letti dal file. Sul file ogni pixel e' rappresentato come 7 byte: i byte 0 e 1 sono la x, 2 e 3 sono la y, i byte 4 5 6 sono il 
 * vettore rgb. La funzione deve allocare dinamicamente nell'heap un vettore di struct pixel della dimensione necessaria a contenere tanti 
 * pixel quanti presenti nel file e ritornarlo. Inoltre la funzione deve impostare la variabile puntata da n al numero di pixel letti.
 */
#include <stdio.h>
#include <stdlib.h>
#include "punti.h"

int main(void){
	FILE *f;
	struct pixel *vp;
	size_t n;
	
	if((f = fopen("punti1.dat", "rb")) == NULL){
		perror("punti1.dat");
		return -1;
	}
	
	vp = read_pizels(f, &n);
	
	free(vp);
	
	return 0;
}
