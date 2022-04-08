/* Author: Matteo Gianferrari
 * Data: 08/04/2022
 * Implementare la funzione che accetta come parametro un puntatore a file aperto in modalita' lettura e un puntatore a una variabile
 * in cui inserire il numero di vettori letti. La funzione ritorna un puntatore a un'area di memoria allocata dinamicamente che
 * contiene tante struct vettore, una per ogni vettore nel file. In goni struct, il campo len e' impostato al numero di elementi
 * del vettore corrente, mentre il campo data punta ad un'area di memoria allocata dinamicamente contenente i valori.
 */
#include <stdio.h>
#include <stdlib.h>
#include "vettori.h"

int main(void){
	FILE *f;
	struct vettore *v;
	size_t i, n;
	
	if((f = fopen("vettori3.log", "r")) == NULL)
		return 0;
	
	v = vettori_leggi(f, &n);
	
	for(i = 0; i < n; i++)
		free(v[i].data);
	free(v);
	
	return 0;
}
