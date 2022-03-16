/* Author: Matteo Gianferrari
 * Data: 16/03/2022
 */
#include <math.h>
#include "razionali.h"

/* static int mcd(int m, int n)
 * Parameters:
 * int m;  primo numero
 * int n;  secondo numero
 *
 * Purpose:
 * Calcola il minimo comune divisore tra i 2 numeri forniti.
 
 * Return:
 * Se n == 0 ritorna m.
 * Altrimenti ritorna mcd(n, m % n).
 *
 * Notes:
 * Funzione ricorsiva.
 */
static int mcd(int m, int n){
	return (n == 0) ? m : mcd(n, m % n);
}

/* void fr_riduci(struct fraz *a)
 * Parameters:
 * struct fraz *a;  puntatore a struttura frazione
 *
 * Purpose:
 * Riduce ai minimi termini il numeratore e il denominatore
 * di una frazione utilizzanod il mcd.
 *
 * Return:
 * void
 *
 * Notes:
 * Nessuna.
 */
void fr_riduci(struct fraz *a){
	int ris;
	
	ris = mcd(abs(a->num), a->den);
	
	a->num /= ris;
	a->den /= ris;
}

/* void fr_somma(struct fraz *ris, const struct fraz *a, const struct fraz *b)
 * Parameters:
 * struct fraz *ris;      puntatore a struttura frazione
 * const struct fraz *a;  puntatore a struttura frazione
 * const struct fraz *b;  puntatore a struttura frazione
 *
 * Purpose:
 * Calcola la somma tra 2 frazioni fornite e inserisce il risultato 
 * ridotto ai minimi termini nella frazione risultato.
 *
 * Return:
 * void
 *
 * Notes:
 * Nessuna.
 */
void fr_somma(struct fraz *ris, const struct fraz *a, const struct fraz *b){
	ris->num = (a->num * b->den) + (b->num * a->den);
	ris->den = a->den * b->den;
	
	fr_riduci(ris);
}
