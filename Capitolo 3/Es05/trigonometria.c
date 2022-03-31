/* Author: Matteo Gianferrari
 * Data: 01/03/2022
 */
#include <math.h>
#include "trigonometria.h"

/* double solve(double a)
 * Parameters:
 * double a;  valore di input
 *
 * Purpose:
 * Calcola il valore a cui la successione precedente converge.
 *
 * Return:
 * double
 *
 * Notes:
 * Nessuna.
 */
double solve(double a){
	double x, cur = 0., dif = 0.;
	
	do{
		x = cur;
		
		cur = x + (cos(x) - a * x) / (sin(x) + a);
		dif = fabs(cur - x);
	} while(dif > 1e-10);
		
	return x;
}
