/* Author: Matteo Gianferrari
 * Data: 28/02/2022
 * Implementare la funzione che calcola il valore di sin(x) utilizzando lo sviluppo 
 * di Taylor fornito. Non e' consentito l'utilizzo di librerie esterne.
 */
#include <math.h>
#include "trigonometria.h"

#define USE_MATH_DEFINES

int main(void){
	double s;
	
	s = seno(0.);
	s = seno(M_PI);
	s = seno(M_PI_2);
	s = seno(M_PI_4);
	s = seno(2. * M_PI / 3.);
	s = seno(M_PI / 3);
	s = seno(M_PI / 6);
	s = seno(3 * M_PI_2);
		
	return 0;
}
