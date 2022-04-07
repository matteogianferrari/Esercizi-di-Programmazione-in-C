/* Author: Matteo Gianferrari
 * Data: 16/02/2022
 */
#include "binomiale.h"

/* double binomiale_simmetrico(unsigned int n, unsigned int h, unsigned int k)
 * Parameters:
 * unsigned int n;  parametro 1 del coefficiente binomiale simmetrico
 * unsigned int h;  parametro 2 del coefficiente binomiale simmetrico
 * unsigned int k;  parametro 3 del coefficiente binomiale simmetrico
 * 
 * Purpose:
 * Calcola il binomiale simmetrico dei numeri in input
 *
 * Return:
 * Ritorna n! / (h! * k!)                      
 *
 * Notes:
 * Funzione ricorsiva.
 */
double binomiale_simmetrico(unsigned int n, unsigned int h, unsigned int k){
	return fattoriale(n) / (fattoriale(h) * fattoriale(k));
}

/* double fattoriale(unsigned int n)
 * Parameters:
 * unsigned int n;  numero di cui calcolare il fattoriale   
 * 
 * Purpose:
 * Calcola il fattoriale del numero in input
 *
 * Return:
 * Se n uguale a 0 ritorna 1
 * Altrimenti ritorna n * (n - 1)!                     
 *
 * Notes:
 * Funzione ricorsiva, funzione statica perche' predisposta per
 * utilizzo interno alla funzione binomiale.
 */
static double fattoriale(unsigned int n){
	return (n == 0) ? 1 : n * fattoriale(n - 1);
}
