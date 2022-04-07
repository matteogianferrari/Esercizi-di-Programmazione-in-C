/* Author: Matteo Gianferrari
 * Data: 07/04/2022
 * Implementare la funzione che riceve in ingresso un puntatore ad un vettore di struct punto3d, il numero di elementi del vettore
 * e due puntatori a variabili di tipo size_t. La funzione deve confrontare tutti con tutti i punti del vettore trovando la coppia
 * di punti piu' distanti secondo la distanza euclidea. Le variabili puntate da p1 e p2 devono essere impostate agli indici dei due
 * punti piu' distanti. Se ci sono meno di due punti, la funzione deve ritornare 0, altrimenti 1. 
 */
#include <stdlib.h>
#include "punti.h"

int main(void){
	int ret;
	size_t p1, p2;
	
	struct punto3d punti1[] = {
		{0.0, 0.0, 0.0},
		{1.0, 1.0, 1.0},
		{2.0, 2.0, 2.0}
	};
	
	ret = trova_piu_lontani(punti1, sizeof(punti1) / sizeof(*punti1), &p1, &p2);
	
	struct punto3d punti2[] = {
		{0.3245, 0.1235, 0.4575},
		{1.8456, 1.2346, 1.9456},
		{2.1234, 2.7424, 2.2625},
		{5.2564, 5.4572, 5.9345},
		{6.7213, 6.0135, 6.0321},
		{7.0978, 7.2315, 7.6666}	
	};
	
	ret = trova_piu_lontani(punti2, sizeof(punti2) / sizeof(*punti2), &p1, &p2);
	
	return 0;
}
