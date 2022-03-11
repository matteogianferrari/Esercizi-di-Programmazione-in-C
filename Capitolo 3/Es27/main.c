/* Author: Matteo Gianferrari
 * Data: 11/03/2022
 * Implementare la funzione che accetta come parametro un file aperto in modalita' lettura strutturato come segue:
 * <numero di persone><'\n'>
 * <nome persona><' '><eta' persona><'\n'>.
 * La funzione deve ritornare il numero di teenager (tra 13 e 19 anni compresi) presenti nell'elenco di persone.
 */
#include <stdio.h>
#include "countteen.h"

int main(void){
	FILE *f;
	size_t ret;
	
	if(!(f = fopen("people2.txt", "r")))
		return -1;
	
	ret = count_teenagers(f);
	
	if(fclose(f) == EOF)
		return -2;
	
	return 0;
}
