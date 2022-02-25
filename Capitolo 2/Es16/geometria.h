/* Author: Matteo Gianferrari
 * Data: 25/02/2022
 */
#ifndef __GEOMETRIA_H__
#define __GEOMETRIA_H__

struct punto { 
	double x;
	double y;
};

double distanza(struct punto *a, struct punto *b);

#endif
