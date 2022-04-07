/* Author: Matteo Gianferrari
 * Data: 07/04/2022
 */
#include <stdlib.h>
#include <math.h>
#include "punti.h"

/* static double distanza(const struct punto3d *p1, const struct punto3d *p2)
 * Parameters:
 * const struct punto3d *p1;  puntatore a struttura punto3d
 * const struct punto3d *p2;  puntatore a struttura punto3d
 *
 * Purpose:
 * Calcola la distanza tra 2 punti nello spazio.
 *
 * Return:
 * Distanza.
 *
 * Notes:
 * Nessuna.
 */
static double distanza(const struct punto3d *p1, const struct punto3d *p2){
	size_t i;
	double diff, d = 0.f;
	
	for(i = 0; i < 3; i++)
		diff = (p1->coord[i] - p2->coord[i]) * (p1->coord[i] - p2->coord[i]);
		d += diff;
	
	return sqrt(d);	
}

/* int trova_piu_lontani(const struct punto3d *punti, size_t n, size_t *p1, size_t *p2)
 * Parameters:
 * const struct punto3d *punti;  puntatore ad array di punti3d
 * size_t n;                     dimensione dell'array
 * size_t *p1;                   puntatore a indice del punto 1
 * size_t *p2;                   puntatore a indice del punto 2
 *
 * Purpose:
 * Memorizza nei 2 puntatori gli indici dei 2 punti nell'array  
 * che si trovano alla distanza maggiore tra tutti.
 *
 * Return:
 * Se l'array ha meno di 2 elementi ritorna 0.
 * Altrimenti ritorna 1.
 *
 * Notes:
 * Nessuna.
 */
int trova_piu_lontani(const struct punto3d *punti, size_t n, size_t *p1, size_t *p2){
	size_t i, j;
	double d, max = 0.f;
	
	if(n < 2)
		return 0;
	
	for(i = 0; i < n; i++)
		for(j = i + 1; j < n; j++)
			if((d = distanza(punti + i, punti + j)) < max){
				max = d;
				*p1 = i;
				*p2 = j;
			}
	
	return 1;
}
