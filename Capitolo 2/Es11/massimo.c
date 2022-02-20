/* Author: Matteo Gianferrari
 * Data: 20/02/2022
 */
#include <stdio.h>
#include "massimo.h"

/* int cerca_massimo(const char *file_name)
 * Parameters:
 * const char *file_name;  stringa contenente il nome del file
 * 
 * Purpose:
 * Ritorna il numero maggiore nel file
 *
 * Return:
 * Il numero maggiore                   
 *
 * Notes:
 * Il nome del file e' sempre valido, non sono stati richiesti
 * controlli nell'apertura e chiusura del file, la soluzione
 * indicata non inizializza massimo come in quella proposta dal
 * testo in quanto il numero piu' grande potrebbe essere negativo.
 */
int cerca_massimo(const char *file_name){
	FILE *fp;
	int num, max;
	char buf[BUF_LEN];
	
	fp = fopen(file_name, "r");
		
	fgets(buf, sizeof(buf), fp);
	sscanf(buf, "%d\n", &num);
	max = num;
	
	while(fgets(buf, sizeof(buf), fp) != NULL){
		sscanf(buf, "%d\n", &num);
		max = (num > max) ? num : max;
	}
	
	fclose(fp);
	
	return max;
}
