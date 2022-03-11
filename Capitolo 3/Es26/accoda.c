/* Author: Matteo Gianferrari
 * Data: 11/03/2022
 */
#include <stdio.h>
#include <string.h>
#include "accoda.h"

/* int accoda_tutti_file(const char *file_nomi, const char *file_out)
 * Parameters:
 * const char *file_nomi;  puntatore a stringa di caratteri
 * const char *file_out;   puntatore a stringa di caratteri
 *
 * Purpose:
 * Apre il file_nomi in lettura e file_out in scrittura binaria,
 * legge i nomi dei file da aprire in modalita lettura binaria e 
 * concatena il contenuto nel file di output.
 *
 * Return:
 * Se i file forniti non esistono ritorna 0.
 * Altrimenti ritorna il numero di file aperti e letti.
 *
 * Notes:
 * Nessuna.
 */
int accoda_tutti_file(const char *file_nomi, const char *file_out){
	FILE *f_nomi, *f_out, *f_temp;
	char buf[MAX_LEN], c;
	int i = 0;
	
	if((f_nomi = fopen(file_nomi, "r")) == NULL)
		return 0;
	
	if((f_out = fopen(file_out, "wb")) == NULL)
		return 0;
	
	while(fgets(buf, MAX_LEN, f_nomi) != NULL){
		if(buf[strlen(buf) - 1] == '\n')		//se non e' l'ultima riga togli il '\n'
			buf[strlen(buf) - 1] = '\0';

		if((f_temp = fopen(buf, "rb")) == NULL)
			continue;
		
		while((c = getc(f_temp)) != EOF)
			fputc(c, f_out);
			
		fclose(f_temp);
		i++;	
	}
	
	fclose(f_nomi);
	fclose(f_out);
	
	return i;
}
