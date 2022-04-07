/* Author: Matteo Gianferrari
 * Data: 16/02/2022
 */
#ifndef __GEOMETRIA_H__
#define __GEOMETRIA_H__

struct punto {
	double x;
	double y;
};

void rotazione(struct punto *p, double alpha);

#endif
