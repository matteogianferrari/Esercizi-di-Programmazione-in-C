/* Author: Matteo Gianferrari
 * Data: 16/02/2022
 * Definire la struttura punto e la funzione che riceve in ingresso un puntatore ad un elemento struct punto e un angolo alpha espresso in radianti.
 * La funzione deve ruotare il punto puntato da p di un angolo alpha secondo le seguenti formule  x' = x cos a  - y sin a	y' = x sin a + y cos a.
 */
#include <math.h>
#include "geometria.h"

int main(void){
	struct punto p = {1.0, 0.0};
	struct punto p1;
	double gradi;
	
	for(gradi = 0.0; gradi < 360.0; gradi += 45.0){
		double alpha = gradi / 180.0  * M_PI;
		p1 = p;
		rotazione(&p1, alpha);
	}
	
	return 0;
}
