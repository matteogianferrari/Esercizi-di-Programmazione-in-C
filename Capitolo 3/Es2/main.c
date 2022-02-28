/* Author: Matteo Gianferrari
 * Data: 28/02/2022
 * Implementare la funzione che calcola il valore di cos(x) utilizzando lo sviluppo 
 * di Taylor fornito. Non e' consentito l'utilizzo di librerie esterne.
 */
#include <math.h>
#include "trigonometria.h"

#define USE_MATH_DEFINES

int main(void){
	double c;
	
	c = coseno(0.);
	c = coseno(M_PI);
	c = coseno(M_PI_2);
	c = coseno(M_PI_4);
	c = coseno(2. * M_PI / 3.);
	c = coseno(M_PI / 3);
	c = coseno(M_PI / 6);
	c = coseno(3 * M_PI_2);
		
	return 0;
}
