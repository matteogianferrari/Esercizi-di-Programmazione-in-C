/* Author: Matteo Gianferrari
 * Data: 01/03/2022
 * Implementare la funzione che calcola il valore di sinh(x) utilizzando lo sviluppo 
 * di Taylor fornito. Non e' consentito l'utilizzo di librerie esterne.
 */
#include <math.h>
#include "trigonometria.h"

int main(void){
	double sh1, sh2;
	
	sh1 = seno_iperbolico(0.);
	sh2 = sinh(0.);
	sh1 = seno_iperbolico(2.);
	sh2 = sinh(2.);
	sh1 = seno_iperbolico(4.);
	sh2 = sinh(4.);
	sh1 = seno_iperbolico(-2.);
	sh2 = sinh(-2.);
	sh1 = seno_iperbolico(-6.);
	sh2 = sinh(-6.);
		
	return 0;
}
