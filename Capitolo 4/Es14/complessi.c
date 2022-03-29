/* Author: Matteo Gianferrari
 * Data: 27/03/2022
 */
#include <stdio.h>
#include "complessi.h"

/* int read_complesso(struct complesso *comp, FILE *f)
 * Parameters:
 * struct complesso *comp;  puntatore a struttura dati complesso
 * FILE *f;                 puntatore a file 
 *
 * Purpose:
 * Legge il file e memorizza nel puntatore fornito il dato complesso.
 *
 * Return:
 * Se la funzione non legge le 2 parti del numero complesso ritorna 0.
 * Altrimenti ritorna 1.
 *
 * Notes:
 * Nessuna.
 */
int read_complesso(struct complesso *comp, FILE *f){
	char buf[100];
	
	fgets(buf, 100, f);
	if(sscanf(buf, "%lf %lf\n", &comp->re, &comp->im) != 2)
		return 0;
	
	return 1;
}

/* void write_complesso(const struct complesso *comp, FILE *f)
 * Stampa su file il numero complesso.
 */
void write_complesso(const struct complesso *comp, FILE *f){
	fprintf(f, "%lf %lf\n", comp->re, comp->im);
}

/* void prodotto_complesso(struct complesso *comp1, struct complesso *comp2)
 * Parameters:
 * struct complesso *comp1;  puntatore a struttura dati complesso
 * struct complesso *comp2;  puntatore a struttura dati complesso
 *
 * Purpose:
 * Esegue il prodotto tra 2 numeri complessi forniti e memorizza il
 * risultato nel primo puntatore al numero complesso.
 *
 * Return:
 * void
 *
 * Notes:
 * Nessuna.
 */
void prodotto_complesso(struct complesso *comp1, struct complesso *comp2){
	double temp_re, temp_im;
	
	temp_re = comp1->re * comp2->re - comp1->im * comp2->im;
	temp_im = comp1->re * comp2->im + comp1->im * comp2->re;
	
	comp1->re = temp_re;
	comp1->im = temp_im; 
}
