/* Author: Matteo Gianferrari
 * Data: 30/03/2022
 */
#ifndef __DATI_H__
#define __DATI_H__

struct dato {
	double valore;
	unsigned classe;
};

struct dato *read_dati(const char *filename, unsigned int *pn);

#endif
