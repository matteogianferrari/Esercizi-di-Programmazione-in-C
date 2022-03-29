/* Author: Matteo Gianferrari
 * Data: 29/03/2022
 */
#ifndef __STRINGHE_H__
#define __STRINGHE_H__

struct stringa {
	unsigned char length;
	char *s;
};

struct stringa *read_stringhe_bin(const char *filename, unsigned int *pn);

#endif
