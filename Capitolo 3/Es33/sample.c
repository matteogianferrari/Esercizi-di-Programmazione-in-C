/* Author: Matteo Gianferrari
 * Data: 15/03/2022
 */
#include <stdio.h>
#include "sample.h"

/* int sample_scrivi(FILE *f, const struct sample *s)
 * Parameters:
 * FILE *f;                 puntatore a file
 * const struct sample *s;  puntatore a struttura sample
 *
 * Purpose:
 * Scrive sul file specificato aperto in modalita' binaria 
 * gli attributi della struttura sample fornita.
 *
 * Return:
 * Se avvengono errori di scrittura ritorna 0.
 * Altrimenti ritorna 1.
 *
 * Notes:
 * Nessuna.
 */
int sample_scrivi(FILE *f, const struct sample *s){
	if(fwrite(&s->id_sample, sizeof(s->id_sample), 1, f) != 1)
		return 0;

	if(fwrite(s->nome_categoria, sizeof(*s->nome_categoria), sizeof(s->nome_categoria), f) != sizeof(s->nome_categoria))
		return 0;
	
	if(fwrite(&s->accuracy, sizeof(s->accuracy), 1, f) != 1)
		return 0;
		
	return 1;
}

/* int sample_leggi(FILE *f, struct sample *s)
 * Parameters:
 * FILE *f;           puntatore a file
 * struct sample *s;  puntatore a struttura sample
 *
 * Purpose:
 * Legge da file specificato aperto in modalita' binaria 
 * gli attributi della struttura sample fornita.
 *
 * Return:
 * Se avvengono errori di lettura ritorna 0.
 * Altrimenti ritorna 1.
 *
 * Notes:
 * Nessuna.
 */
int sample_leggi(FILE *f, struct sample *s){
	if(fread(&s->id_sample,  sizeof(s->id_sample), 1, f) != 1)
		return 0;

	if(fread(s->nome_categoria, sizeof(*s->nome_categoria), sizeof(s->nome_categoria), f) != sizeof(s->nome_categoria))
		return 0;
	
	if(fread(&s->accuracy, sizeof(s->accuracy), 1, f) != 1)
		return 0;
			
	return 1;
}
