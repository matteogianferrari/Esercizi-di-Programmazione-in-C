/* Author: Matteo Gianferrari
 * Data: 24/02/2022
 * Implementare la funzione che accetta due nomi di file come stringhe C e deve aprire filein in lettura in modalita' testuale e fileout
 * in scrittura in modalita' testuale. La funzione deve copiare tutti i caratteri del file filein nel file fileout, riportando una
 * volta sola i caratteri consecutivi ripetuti. La funzione ritorna 0 se non riesce uno dei due file, 1 altrimenti.
 */
#include <stdio.h>
#include "rimuovi.h"

int main(void){
	int i;
	
	i = rimuovi_doppie("testo1.txt", "ris1.txt");
	i = rimuovi_doppie("testo2.txt", "ris2.txt");
	i = rimuovi_doppie("testo3.txt", "ris3.txt");
	
	return 0;
}
