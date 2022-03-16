/* Author: Matteo Gianferrari
 * Data: 15/03/2022
 */
#ifndef __VETTORI_H__
#define __VETTORI_H__

struct vettore {
	unsigned char size;
	double *data;
};

int vettore_leggi(FILE *f, struct vettore *v);

#endif
