/* Author: Matteo Gianferrari
 * Data: 14/03/2022
 */
#include <stdio.h>
#include <stdlib.h>
#include "capovolgi.h"

/* int capovolgi(const char *file_in, const char *file_out)
 * Parameters:
 * const char *file_in;   stringa contenente il nome del file input
 * const char *file_out;  stringa contenente il nome del file output
 *
 * Purpose:
 * Copia tutti i caratteri del file input e li inverte nel file output.
 *
 * Return:
 * Se avvengono errori in apertura dei file ritorna 0.
 * Altrimenti ritorna 1.
 *
 * Notes:
 * Nessuna.
 */
int capovolgi(const char *file_in, const char *file_out){
	FILE *f_in, *f_out;
	size_t len;
	char *str;
	
	if((f_in = fopen(file_in, "rb")) == NULL)
		return 0;

	if((f_out = fopen(file_out, "wb")) == NULL)
		return 0;
	
	fseek(f_in, 0, SEEK_END);
	len = ftell(f_in);
	fseek(f_in, 0, SEEK_SET);
	
	str = (char *)malloc(len * sizeof(*str));
	fread(str, sizeof(*str), len, f_in);
	fclose(f_in);
	
	while(len > 0){
		len--;
		putc(str[len], f_out);
	}
	fclose(f_out); 
	
	free(str);
	
	return 1;
}
