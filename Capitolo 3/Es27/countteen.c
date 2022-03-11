/* Author: Matteo Gianferrari
 * Data: 11/03/2022
 */
#include <stdio.h>
#include "countteen.h"

/* size_t count_teenagers(FILE *f)
 * Parameters:
 * FILE *f;            puntatore a file
 *
 * Purpose:
 * Legge da un file il numero di persone e legge tutte
 * le persone, contando il numero di teenager.
 *
 * Return:
 * Se non e' presente il numero di persone ritorna -1.
 * Altrimenti ritorna il numero di teenager.      
 *
 * Notes:
 * Utilizzate fgets con successiva sscanf invece che fscanf
 * perche' soluzione piu' sicura.
 */
size_t count_teenagers(FILE *f){
	struct person *p;
	char buf[BUF_LEN];
	size_t c = 0, num_pers;
	
	if((fgets(buf, BUF_LEN, f)) != NULL)
		sscanf(buf, "%u", &num_pers);
	else
		return 0;
	
	while(num_pers-- > 0){
		fgets(buf, BUF_LEN, f);
		sscanf(buf, "%s %u", p->name, &p->age);
		
		if(p->age >= MIN_AGE && p->age <= MAX_AGE)
			c++;
	}
	
	return c;
}
