/* Author: Matteo Gianferrari
 * Data: 16/03/2022
 */
#ifndef __RAZIONALI_H__
#define __RAZIONALI_H__

struct fraz {
	int num;
	unsigned int den;
};

void fr_somma(struct fraz *ris, const struct fraz *a, const struct fraz *b);
void fr_riduci(struct fraz *a);

#endif
