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

struct matrix *mat_replica(const struct matrix *a, int dir);

#endif
