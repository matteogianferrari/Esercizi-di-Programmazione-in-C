/* Author: Matteo Gianferrari
 * Data: 16/02/2022
 */
#include "binomiale.h"

/* double binomiale(unsigned int n, unsigned int k)
 * Parameters:
 * unsigned int n;  parametro 1 del coefficiente binomiale
 * unsigned int k;  parametro 2 del coefficiente binomiale
 * 
 * Purpose:
 * Calcola il binomiale della coppia di numeri in input
 *
 * Return:
 * Se n uguale a 0 o k > n ritorna -1
 * Altrimenti ritorna n! / (k! * (n - k)!)                      
 *
 * Notes:
 * Funzione ricorsiva.
 */
double binomiale(unsigned int n, unsigned int k){
	if(n == 0 || k > n)
		return -1;
	
	return fattoriale(n) / (fattoriale(k) * fattoriale(n - k));
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
