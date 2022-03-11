/* Author: Matteo Gianferrari
 * Data: 11/03/2022
 */
#ifndef __COUNT_TEEN_H__
#define __COUNT_TEEN_H__

#define BUF_LEN 270
#define MIN_AGE 13
#define MAX_AGE 19

struct person {
	char name[256];
	unsigned int age;
};

size_t count_teenagers(FILE *f);

#endif
