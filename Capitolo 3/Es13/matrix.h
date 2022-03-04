/* Author: Matteo Gianferrari
 * Data: 04/03/2022
 */
#ifndef __MATRIX_H__
#define __MATRIX_H__

struct matrix {
	size_t rows;
	size_t cols;
	double *data;
};

int mat_isupper(const struct matrix *mat);
int mat_islower(const struct matrix *mat);

#endif
