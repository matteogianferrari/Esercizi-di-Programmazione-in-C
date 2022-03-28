/* Author: Matteo Gianferrari
 * Data: 19/03/2022
 */
#ifndef __COMPRESS_H__
#define __COMPRESS_H__

struct dati {
	size_t len;
	int *vals;
};

int dati_read(const char *filename, struct dati *d);

#endif
