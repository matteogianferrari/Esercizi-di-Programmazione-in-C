/* Author: Matteo Gianferrari
 * Data: 18/03/2022
 */
#ifndef __MATRIX_H__
#define __MATRIX_H__

struct matrix {
	size_t rows;
	size_t cols;
	double *data;
};

struct matrix *mat_somma_diretta(const struct matrix *a, const struct matrix *b);

#endif
