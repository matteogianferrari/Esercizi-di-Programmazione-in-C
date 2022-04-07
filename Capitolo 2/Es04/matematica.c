/* Author: Matteo Gianferrari
 * Data: 16/02/2022
 */
#include "matematica.h"

/* double semifattoriale(char n)
 * Parameters:
 * char n;  numero di cui calcolare il semifattoriale   
 * 
 * Purpose:
 * Calcola il semifattoriale del numero in input
 *
 * Return:
 * Se n negativo ritorna -1
 * Se n uguale a 0 o 1 ritorna 1
 * Altrimenti ritorna n * (n - 2)!!                       
 *
 * Notes:
 * Funzione ricorsiva.
 */
double semifattoriale(char n){
	if(n < 0)
		return -1.0;
	else if(n == 0 || n == 1)
		return 1.0;
	else
		return n * semifattoriale(n - 2);
}
