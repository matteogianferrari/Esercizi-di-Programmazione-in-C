/* Author: Matteo Gianferrari
 * Data: 01/03/2022
 * Implementare la funzione che accetta come parametro il valore a (che sara' sempre maggiore o uguale a 0.5) e
 * deve ritornare il valore a cui la successione precedente converge. La funzione deve terminare e ritornare il
 * risultato quando la differenza in valore assoluto tra la nuova soluzione e la precedente e' inferiore a 1e-10.
 */
#include "trigonometria.h"

int main(void){
	double x;
	
	x = solve(0.5);
	x = solve(1.0);
	x = solve(1.5);
	x = solve(10.0);
	x = solve(100.0);
		
	return 0;
}
