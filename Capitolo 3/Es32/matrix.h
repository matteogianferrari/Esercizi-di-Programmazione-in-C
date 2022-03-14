/* Author: Matteo Gianferrari
 * Data: 14/03/2022
 */
#ifndef __MATRIX_H__
#define __MATRIX_H__

struct matrix {
	size_t rows;
	size_t cols;
	double *data;
};

struct matrix *mat_copy(const struct matrix *mat);

#endif
