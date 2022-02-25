/* Author: Matteo Gianferrari
 * Data: 25/02/2022
 */
#include "matrici.h"

/* double det3x3(double *matr)
 * Parameters:
 * double *matr;  puntatore ad array di double
 *
 * Purpose:
 * Calcola il determinante di una matrice 3 x 3
 *
 * Return:
 * Determinante della matrice                    
 *
 * Notes:
 * Non sono richiesti controlli di errori.
 */
double det3x3(double *matr){
	return (matr[0] * matr[4] * matr[8]) + (matr[1] * matr[5] * matr[6]) + (matr[2] * matr[3] * matr[7]) - (matr[6] * matr[4] * matr[2]) - (matr[7] * matr[5] * matr[0]) - (matr[8] * matr[3] * matr[1]);
}
