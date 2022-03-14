/* Author: Matteo Gianferrari
 * Data: 13/03/2022
 * Implementare la definizione typedef byte e la funzione che accetta come parametro un nome di file che deve essere aperto in lettura binaria e un puntatore
 * ad una variabile di tipo size_t in cui si dovra' inserire il numero di byte letti dal file. La funzione deve ritornare un puntatore ad una nuova zona di
 * memoria (allocata dinamicamente nell'heap) contenente tutti i byte letti dal file. La dimensione del file non e' nota a priori e non puo' essere vincolata dal codice.
 */
#include <stdio.h>
#include <stdlib.h>
#include "readfile.h"

int main(void){
	byte *buf;
	size_t len;
		
	buf = read_file("prova.txt", &len);
	free(buf);
	
	buf = read_file("aip.txt", &len);
	free(buf);
	
	return 0;
}
