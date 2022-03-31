/* Author: Matteo Gianferrari
 * Data: 31/03/2022
 */
#ifndef __DATABASE_H__
#define __DATABASE_H__

struct record {
	uint32_t size;
	uint8_t *data;
};

struct database {
	uint32_t num;
	struct record *recs;
};

int db_load(const char *filename, struct database *db);

#endif
