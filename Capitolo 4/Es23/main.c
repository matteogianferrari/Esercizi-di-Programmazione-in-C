/* Author: Matteo Gianferrari
 * Data: 31/03/2022
 * Implementare la funzione che apra il file il cui nome viene fornito dalla stringa C filename e caricarne il contenuto in memoria. La funzione deve:
 * -Impostare il campo num della struct database puntata da db al numero di record presenti sul file.
 * -Far puntare recs ad un vettore di struct record, grande num, allocato dinamicamente sull'heap.
 * -Ogni record del vettore avra' il campo size impostato alla lunghezza del recorde il campo data
 *  dovra' puntare ad un vettore di byte, grande size, allocato dinamicamente sull'heap, contenente i dati letti dal file.
 * La funzione deve ritornare 1 se e' riuscita ad aprire il file e a leggerne interamente il contenuto, 0 altrimenti. Tutti i file forniti, contengono almeno un record e non hanno errori.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "database.h"

void stampa_record(const struct record *r, FILE *f_out);

int main(void){
	struct database db;
	uint32_t i;
	int ret;
	
	ret = db_load("db2.bin", &db);
	printf("Il database letto contiene %d records:\n", db.num);
	
	for(i = 0; i < db.num; i++){
		printf("Record #%u (%d byte):\n",i, db.recs[i].size);
		stampa_record(&db.recs[i], stdout);
	}
	
	for(i = 0; i < db.num; i++)
		free(db.recs[i].data);
	free(db.recs);
	
	return 0;
}

void stampa_record(const struct record *r, FILE *f_out){
	uint32_t i;
	
	for(i = 0; i < r->size; i++){
		printf("%02x ", r->data[i]);
		if(i > 20){
			printf("(continua...)");
			break;
		}
	}
	printf("\n");
}
