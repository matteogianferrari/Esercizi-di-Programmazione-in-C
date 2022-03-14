/* Author: Matteo Gianferrari
 * Data: 14/03/2022
 */
#include <stdlib.h>
#include <string.h>
#include "matrix.h"

/* struct matrix *mat_copy(const struct matrix *mat)
 * Parameters:
 * const struct matrix *mat; puntatore a struttura matrice
 *
 * Purpose:
 * Alloca dinamicamente una matrice e copia il
 * contenuto della matrice fornita in essa.
 *
 * Return:
 * Se avvengono errori ritorna 0.
 * Altrimenti ritorna 1.
 *
 * Notes:
 * Nessuna.
 */
struct matrix *mat_copy(const struct matrix *mat){
	struct matrix *m;
	
	if((m = (struct matrix *)malloc(sizeof(*m))) == NULL)
		return NULL;
		
	m->rows = mat->rows;
	m->cols = mat->cols;
	
	if((m->data = (double *)malloc((m->rows * m->cols) * sizeof(*m->data))) == NULL)
		return NULL;
	
	memcpy(m->data, mat->data, (m->rows * m->cols) * sizeof(*m->data));
	
	return m;
}
