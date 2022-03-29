/* Author: Matteo Gianferrari
 * Data: 27/03/2022
 * Implementare la funzione read_complesso che accetta come parametro un puntatore a un numero complesso e un file aperto in lettura.
 * La funzione deve leggere dal file i due campi del numero complesso e ritornare 1 se e' riuscita a leggere 2 valori, 0 altrimenti.
 */
#include <stdio.h>
#include <stdlib.h>
#include "complessi.h"

int main(void){
	FILE *f_in, *f_out;
	struct complesso c1, c2;
	
	if((f_in = fopen("complessi.txt", "r")) == NULL)
		return EXIT_FAILURE;
	
	if((f_out = fopen("prodotti_complessi.txt", "w")) == NULL){
		fclose(f_in);
		return EXIT_FAILURE;	
	}
	
	while(read_complesso(&c1, f_in) && read_complesso(&c2, f_in)){
		printf("x = (%lf + i*%lf)\n", c1.re, c1.im);
		printf("y = (%lf + i*%lf)\n", c2.re, c2.im);
		
		prodotto_complesso(&c1, &c2);
		printf("x * y = (%lf + i*%lf)\n\n", c1.re, c1.im);
		write_complesso(&c1, f_out);
	}
	
	fclose(f_in);
	fclose(f_out);
	
	return EXIT_SUCCESS;
}
