/* Author: Matteo Gianferrari
 * Data: 27/03/2022
 */
#ifndef __COMPLESSI_H__
#define __COMPLESSI_H__

struct complesso {
	double re;
	double im;
};

int read_complesso(struct complesso *comp, FILE *f);
void write_complesso(const struct complesso *comp, FILE *f);
void prodotto_complesso(struct complesso *comp1, struct complesso *comp2);

#endif
