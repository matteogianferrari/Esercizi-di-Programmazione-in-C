/* Author: Matteo Gianferrari
 * Data: 19/03/2022
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "audio.h"

/* int audio_read(const char *filename, struct audio *a)
 * Parameters:
 * const char *filename;  nome del file
 * struct audio *a;       puntatore a struttura audio
 *
 * Purpose:
 * Legge il file binario e memorizza i valori all'interno
 * dei vettori canali allocati dinamicamente.
 *
 * Return:
 * Se non viene aperto il file ritorna 0.
 * Altrimenti ritorna 1.
 *
 * Notes:
 * Nessuna.
 */
int audio_read(const char *filename, struct audio *a){
	FILE *f;
	int16_t buf[N_CHANNELS];
	
	if((f = fopen(filename, "rb")) == NULL)
		return 0;
		
	a->samples = 0;
	a->left = NULL;
	a->right = NULL;
	
	while(fread(buf, sizeof(*buf), N_CHANNELS, f) == N_CHANNELS){
		a->left = realloc(a->left, (a->samples + 1) * sizeof(*a->left));
		a->right = realloc(a->right, (a->samples + 1) * sizeof(*a->right));
			
		a->left[a->samples] = buf[0];
		a->right[a->samples] = buf[1];
				
		a->samples++;
	}
	
	fclose(f);
	
	return 1;
}
