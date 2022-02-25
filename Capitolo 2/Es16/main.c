/* Author: Matteo Gianferrari
 * Data: 25/02/2022
 * Implementare la funzione che accetta come parametri due puntatore ad elementi di tipo struct punto e deve
 * restituire la distanza euclidea tra i due punti secondo la formula usuale. Utilizzare la libreria math.h.
 */
#include "geometria.h"

int main(void){
	struct punto a = {1.0, 1.0};
	struct punto b = {4.0, 7.0};
	double d;
	
	d = distanza(&a, &b);
	
	return 0;
}
