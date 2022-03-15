/* Author: Matteo Gianferrari
 * Data: 15/03/2022
 */
#ifndef __SAMPLES_H__
#define __SAMPLES_H__

#define MAX_LEN 20

struct sample {
	int id_sample;
	char nome_categoria[MAX_LEN];
	double accuracy;
};

int sample_scrivi(FILE *f, const struct sample *s);
int sample_leggi(FILE *f, struct sample *s);

#endif
