/* Author: Matteo Gianferrari
 * Data: 14/03/2022
 * Implementare la struttura vettore e la funzione che accetta come parametri due puntatori a const struct vettore a e b e deve creare un nuovo vettore, allocato dinamicamente 
 * sull'heap, che sia la concatenazione dei vettori a e b. Il campo n sara' quindi modificato opportunamente e il campo data dovra' puntare ad un'area di memoria allocata 
 * dinamicamente sull'heap contenente gli elementi di a e b concatenati. I puntatori a e b non saranno mai NULL, ma potranno puntare a vettori con 0 elementi.
 */
#include <stdlib.h>
#include "vettori.h"

int main(void){
	double ad[] = {0.1, 0.2, 0.3};
	struct vettore a = {3, ad};
	
	double bd[] = {0.4, 0.5, 0.6};
	struct vettore b = {3, bd};
	
	struct vettore *p;
	
	p = merge_vettori(&a, &b);
	
	free(p->data);
	free(p);
	
	return 0;
}
