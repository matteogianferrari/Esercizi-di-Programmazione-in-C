/* Author: Matteo Gianferrari
 * Data: 25/02/2022
 */
#include <math.h>
#include "geometria.h"

/* double distanza(struct punto *a, struct punto *b)
 * Parameters:
 * struct punto *a;  puntatore a struct punto
 * struct punto *b;  puntatore a struct punto
 *
 * Purpose:
 * Calcola la distanza euclidea tra 2 punti
 *
 * Return:
 * Distanza tra 2 punti                     
 *
 * Notes:
 * Nella funzione non viene utilizzata pow() perche' non 
 * necessaria per un elevamento di potenza al quadrato.
 */
double distanza(struct punto *a, struct punto *b){
	return sqrt(((a->x - b->x) * (a->x - b->x)) + ((a->y - b->y) * (a->y - b->y)));
}
