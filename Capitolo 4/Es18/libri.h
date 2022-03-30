/* Author: Matteo Gianferrari
 * Data: 30/03/2022
 */
#ifndef __LIBRI_H__
#define __LIBRI_H__

struct libri {
	unsigned int codice;
	char titolo[255];
	unsigned int pagine;
};

struct libri *read_libri(const char *filename, size_t *pn);

#endif
