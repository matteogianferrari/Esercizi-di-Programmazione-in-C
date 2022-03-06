/* Author: Matteo Gianferrari
 * Data: 06/03/2022
 */
#ifndef __MATRIX_H__
#define __MATRIX_H__

struct matrix {
	size_t rows;
	size_t cols;
	double *data;
};

void mat_swapcols(struct matrix *mat, size_t c1, size_t c2);

#endif
