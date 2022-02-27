/* Author: Matteo Gianferrari
 * Data: 27/02/2022
 * Implementare la funzione che accetta come parametro un puntatore ad un file aperto in modalita' testuale e un untatore 
 * ad un dato di tipo struct person. La funzione deve leggere il contenuto del file caricando i dati della persona nella 
 * struttura puntata da pp. Il file contenente i dati della persona e' strutturato cosi': <nome><spazio><eta'>
 */
#include <stdio.h>
#include "readperson.h"

int main(void){
	FILE *f1, *f2;
	struct person p1, p2;
	
	if(!(f1 = fopen("person1.txt", "r")))
		return -1;
	
	if(!(f2 = fopen("person2.txt", "r")))
		return -1;
		
	person_read(f1, &p1);
	person_read(f2, &p2);
	
	if(fclose(f1) == EOF)
		return -2;

	if(fclose(f2) == EOF)
		return -2;
	
	return 0;
}
