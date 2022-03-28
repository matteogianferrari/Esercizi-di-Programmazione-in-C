/* Author: Matteo Gianferrari
 * Data: 19/03/2022
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "compress.h"

/* int dati_read(const char *filename, struct dati *d)
 * Parameters:
 * const char *filename;  nome del file
 * struct dati *d;        puntatore a struttura dati
 *
 * Purpose:
 * Legge il file binario e memorizza i valori all'interno
 * del vettore allocato dinamicamente.
 *
 * Return:
 * Se non viene aperto il file ritorna 0.
 * Se si incontra un numero di byte diverso da 1, 2, 4 ritorna 0.
 * Altrimenti ritorna 1.
 *
 * Notes:
 * Nello switch non si puo' utilizzare solo una variabile a 32bit perche' i numeri
 * sono con segno, -26 in un int8_t (giusto) risulta 230 in int32_t (sbagliato).
 */
int dati_read(const char *filename, struct dati *d){
	FILE *f;
	char num_byte;
	int8_t val8;
	int16_t val16;
	int32_t val32;
	int val, ret = 1;
	
	if((f = fopen(filename, "rb")) == NULL)
		return 0;
	
	d->len = 0;
	d->vals = NULL;
	
	while(fread(&num_byte, 1, 1, f) == 1 && ret != 0){	
		switch(num_byte){								//Protezione dai numeri di byte diversi da 1 2 4			
			case 1:
				ret = fread(&val8, num_byte, 1, f);
				val = val8;
				break;
			case 2:
				ret = fread(&val16, num_byte, 1, f);
				val = val16;
				break;
			case 4:
				ret = fread(&val32, num_byte, 1, f);
				val = val32;
				break;
			default:
				ret = 0;
				break;
		}
		
		if(ret != 0){
			d->vals = realloc(d->vals, (d->len + 1) * sizeof(*d->vals));
			d->vals[d->len] = val;
			d->len++;	
		}
	}
	
	fclose(f);
	
	return 1;
}
