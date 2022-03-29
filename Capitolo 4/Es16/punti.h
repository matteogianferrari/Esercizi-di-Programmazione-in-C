/* Author: Matteo Gianferrari
 * Data: 29/03/2022
 */
#ifndef __PUNTI_H__
#define __PUNTI_H__

struct pixel {
	short x;
	short y;
	unsigned char rgb[3];
};

struct pixel *read_pizels(FILE *f, size_t *n);

#endif
