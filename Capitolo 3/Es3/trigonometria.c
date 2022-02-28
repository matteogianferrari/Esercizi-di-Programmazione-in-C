/* Author: Matteo Gianferrari
 * Data: 28/02/2022
 */
#include "trigonometria.h"

/* double seno(double x)
 * Parameters:
 * double x; angolo su cui calcolare il seno
 *
 * Purpose:
 * Calcola il seno del numero passato usando lo sviluppo di Taylor
 *
 * Return:
 * Seno del valore passato          
 *
 * Notes:
 * La sommatoria da 0 ad infinito viene implementata tramite un ciclo che termina nel momento in cui la 
 * variazione dal valore precedente a quello corrente non e' piu' rappresentabile in una variabile double.
 */
double seno(double x){
	unsigned int n = 0;
	double old, ris = 0, num = 1, den = 1, pot = x;
	
	do{
		old = ris;
		ris += num / den * pot;
		n++;
		
		num *= -1;
		den *= (2 * n) * (2 * n + 1);
		pot *= x * x;
	} while(old != ris);
	
	return ris;
}
