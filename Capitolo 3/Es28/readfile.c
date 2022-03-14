/* Author: Matteo Gianferrari
 * Data: 13/03/2022
 */
#include <stdio.h>
#include <stdlib.h>
#include "readfile.h"

/* byte *read_file(const char *sz_file_name, size_t *cb)
 * Parameters:
 * const char *sz_file_name;  puntatore a stringa di caratteri
 * size_t *cb;				  puntatore a dimensione del buffer
 *
 * Purpose:
 * Apre il file col nome specificato in lettura binaria e alloca
 * un array in memoria della dimensione del file contenente i vari byte,
 * salvando nel puntatore alla dimensione la grandezza del file.
 *
 * Return:
 * Se vengono generati errori ritorna NULL.
 * Altrimenti ritorna il puntatore al buffer allocato dinamicamente.     
 *
 * Notes:
 * Questa funzione utilizza la realloc, senza utilizzare le funzioni e 
 * le macro definite in stdio, di conseguenza e' meno efficiente. 
 * La dimensione massima leggibile di un file e' limitata dal size_t.
 */
//byte *read_file(const char *sz_file_name, size_t *cb){
//	FILE *f;
//	byte *buf;
//	char c;
//	
//	*cb = 0;
//	if((buf = (byte *)malloc(sizeof(*buf))) == NULL)
//		return NULL;
//	
//	if((f = fopen(sz_file_name, "rb")) == NULL)
//		return NULL;
//	
//	while((c = getc(f)) != EOF){
//		buf = realloc(buf, (++*cb) * sizeof(*buf));
//		buf[*cb - 1] = c;
//	}
//	
//	fclose(f);
//	
//	return buf;
//}

/* byte *read_file(const char *sz_file_name, size_t *cb)
 * Parameters:
 * const char *sz_file_name;  puntatore a stringa di caratteri
 * size_t *cb;				  puntatore a dimensione del buffer
 *
 * Purpose:
 * Apre il file col nome specificato in lettura binaria e alloca
 * un array in memoria della dimensione del file contenente i vari byte,
 * salvando nel puntatore alla dimensione la grandezza del file.
 *
 * Return:
 * Se vengono generati errori ritorna NULL.
 * Altrimenti ritorna il puntatore al buffer allocato dinamicamente.     
 *
 * Notes:
 * Questa funzione utilizza le funzioni e le macro definite in stdio, di conseguenza
 * e' piu' efficiente. La dimensione massima leggibile di un file e' limitata dal size_t.
 * Il corretto funzionamento di fseek e fteel dipende dai bit in cui viene compilato il programma. 
 */
byte *read_file(const char *sz_file_name, size_t *cb){
	FILE *f;
	byte *buf;
	
	if((f = fopen(sz_file_name, "rb")) == NULL)
		return NULL;
	
	fseek(f, 0, SEEK_END);		//Sets the position indicator associated with the stream to the end of file.
	*cb = ftell(f);				//Returns the current value of the position indicator of the stream.
	fseek(f, 0, SEEK_SET);		//Sets the position indicator associated with the stream to the start of file.
	
	if((buf = (byte *)malloc(*cb * sizeof(*buf))) == NULL)
		return NULL;
	
	fread(buf, 1, *cb, f);
	
	fclose(f);
	
	return buf;
}

