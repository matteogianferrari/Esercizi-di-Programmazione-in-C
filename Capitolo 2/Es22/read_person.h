/* Author: Matteo Gianferrari
 * Data: 27/02/2022
 */
#ifndef __READ_PERSON_H__
#define __READ_PERSON_H__

#define BUF_LEN 270

struct person {
	char name[256];
	unsigned int age;
};

void person_read(FILE *f, struct person *pp);

#endif
