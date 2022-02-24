/* Author: Matteo Gianferrari
 * Data: 24/02/2022
 */
#include <stdio.h>
#include "rimuovi.h"

/* int rimuovi_doppie(const char *filein, const char *fileout)
 * Parameters:
 * const char *filein;   stringa contenente il nome del file input
 * const char *fileout;  stringa contenente il nome del file output
 * 
 * Purpose:
 * Apre i file, copiando i caratteri dal file input nel file output eliminando
 * i caratteri consecutivi ripetuti 
 *
 * Return:
 * Se avviene un errore di apertura file ritorna 0
 * Altrimenti ritorna 1                  
 *
 * Notes:
 * Si assume che il nome del file sia sempre valido, non sono stati 
 * richiesti controlli nella chiusura del file.
 */
int rimuovi_doppie(const char *filein, const char *fileout){
	FILE *f_in, *f_out;
	char c, last_c = '\0';
	
	if(!(f_in = fopen(filein, "r")))
		return 0;

	if(!(f_out = fopen(fileout, "w")))
		return 0;
	
	while((c = getc(f_in)) != EOF)
		if(c != last_c){
			putc(c, f_out);
			last_c = c;
		}
	
	fclose(f_in);
	fclose(f_out);
	
	return 1;
}
