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

void mat_swaprows(struct matrix *mat, size_t r1, size_t r2);

#endif
