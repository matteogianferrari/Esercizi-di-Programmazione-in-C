/* Author: Matteo Gianferrari
 * Data: 27/02/2022
 */
#include <stdio.h>
#include "readperson.h"

/* void person_read(FILE *f, struct person *pp)
 * Parameters:
 * FILE *f;            puntatore a file
 * struct person *pp;  puntatore a struttura person
 *
 * Purpose:
 * Legge da un file i dati relativi alla persona e li 
 * memorizza nella struttura dati
 *
 * Return:
 * void          
 *
 * Notes:
 * Utilizzate fgets con successiva sscanf invece che fscanf
 * perche' soluzione piu' sicura.
 */
void person_read(FILE *f, struct person *pp){
	char buf[BUF_LEN];
	
	fgets(buf, BUF_LEN, f);
	sscanf(buf, "%s %u", pp->name, &pp->age);
}
