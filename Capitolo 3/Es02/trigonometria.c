/* Author: Matteo Gianferrari
 * Data: 28/02/2022
 */
#include "trigonometria.h"

/* double coseno(double x)
 * Parameters:
 * double x; angolo su cui calcolare il coseno
 *
 * Purpose:
 * Calcola il coseno del numero passato usando lo sviluppo di Taylor
 *
 * Return:
 * coseno del valore passato          
 *
 * Notes:
 * La sommatoria da 0 ad infinito viene implementata tramite un ciclo che termina nel momento in cui la 
 * variazione dal valore precedente a quello corrente non e' piu' rappresentabile in una variabile double.
 */
double coseno(double x){
	unsigned int n = 0;
	double old, ris = 1, num = 1, den = 1, pot = 1;
	
	do{
		old = ris;
		n++;
		
		num *= -1;
		den *= (2 * n) * (2 * n - 1);
		pot *= x * x;
		
		ris += num / den * pot;
	} while(old != ris);
	
	return ris;
}
