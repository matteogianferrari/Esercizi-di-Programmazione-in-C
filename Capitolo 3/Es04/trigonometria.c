/* Author: Matteo Gianferrari
 * Data: 01/03/2022
 */
#include "trigonometria.h"

/* double seno_iperbolico(double x)
 * Parameters:
 * double x; angolo su cui calcolare il seno iperbolico
 *
 * Purpose:
 * Calcola il seno iperbolico del numero passato usando lo sviluppo di Taylor
 *
 * Return:
 * Seno iperbolico del valore passato          
 *
 * Notes:
 * La sommatoria da 0 ad infinito viene implementata tramite un ciclo che termina nel momento in cui la 
 * variazione dal valore precedente a quello corrente non e' piu' rappresentabile in una variabile double.
 */
double seno_iperbolico(double x){
	unsigned int n = 0;
	double old = 1, ris = 0, num = 1, den = 1, pot = x;
	
	while(old != ris){
		old = ris;
		ris += num / den * pot;
		n++;

		den *= (2 * n) * (2 * n + 1);
		pot *= x * x;
	}
	
	return ris;
}
