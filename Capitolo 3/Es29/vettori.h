/* Author: Matteo Gianferrari
 * Data: 14/03/2022
 */
#ifndef __VETTORI_H__
#define __VETTORI_H__

struct vettore {
	size_t n;
	double *data;
};

struct vettore *merge_vettori(const struct vettore *a, const struct vettore *b);

#endif
