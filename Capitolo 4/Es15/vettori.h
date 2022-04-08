/* Author: Matteo Gianferrari
 * Data: 08/04/2022
 */
#ifndef __VETTORI_H__
#define __VETTORI_H__

struct vettore {
	size_t len;
	int *data;
};

struct vettore *vettori_leggi(FILE *f, size_t *n);

#endif
