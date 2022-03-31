/* Author: Matteo Gianferrari
 * Data: 31/03/2022
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "database.h"

/* int db_load(const char *filename, struct database *db)
 * Parameters:
 * struct matrix *mat;  puntatore a struttura matrice
 * FILE *f;             puntatore a file
 *
 * Purpose:
 * Legge dal file binario i record e li memorizza in
 * una struttura database allocata dinamicamente.
 * 
 *
 * Return:
 * Se avvengono errori di lettura ritorna 0.
 * Altrimenti ritorna 1.
 *
 * Notes:
 * Nessuna.
 */
int db_load(const char *filename, struct database *db){
	struct record temp;
	FILE *f;
	
	if((f = fopen(filename, "rb")) == NULL)
		return 0;
	
	db->num = 0;
	db->recs = NULL;
	
	while(1){
		if(fread(&temp.size, sizeof(temp.size), 1, f) != 1)
			break;
		
		temp.data = malloc(temp.size * sizeof(*temp.data));
		if(fread(temp.data, sizeof(*temp.data), temp.size, f) != temp.size){
			free(temp.data);
			fclose(f);
			return 0;
		}
		
		db->recs = realloc(db->recs, (db->num + 1) * sizeof(*db->recs));
		db->recs[db->num] = temp;
		db->num++;
	}
	
	fclose(f);
	
	return 1;
}
