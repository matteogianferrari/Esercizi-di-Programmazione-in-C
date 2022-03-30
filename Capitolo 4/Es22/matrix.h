/* Author: Matteo Gianferrari
 * Data: 30/03/2022
 */
#ifndef __MATRIX_H__
#define __MATRIX_H__

struct matrix {
	size_t rows;
	size_t cols;
	double *data;
};

int matrix_read(struct matrix *mat, FILE *f);

#endif
