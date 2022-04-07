/* Author: Matteo Gianferrari
 * Data: 16/02/2022
 */
#include <math.h>
#include "geometria.h"

/* void rotazione(struct punto *p, double alpha)
 * Parameters:
 * struct punto *p;  puntatore alla struttura punto
 * double alpha;     angolo della rotazione in radianti
 * 
 * Purpose:
 * Calcola la rotazione del punto p di un angolo alpha
 *
 * Return:                     
 * void
 *
 * Notes:
 * La variabile temporanea punto serve per non sovrascrivere
 * i valori di x e y mentre vengono calcolati.
 */
void rotazione(struct punto *p, double alpha){
	struct punto temp;
	
	temp.x = p->x * cos(alpha) - p->y * sin(alpha);
	temp.y = p->x * sin(alpha) + p->y * cos(alpha);
	
	*p = temp;
}
