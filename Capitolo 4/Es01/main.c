/* Author: Matteo Gianferrari
 * Data: 16/03/2022
 * Implementare la funzione fr_somma che effettua la somma tra le due frazioni puntate da a e b e mette il risultato nella frazione puntata da ris.
 * Il risultato deve essere ridotto ai minimi termini, ovvero numeratore e denominatore non devono avere divisori comuni oltre all'unita'.
 * Per ottenere una frazione ai minimi termini, si posson odividere numeratorre e denominatore per il loro massimo comune divisore.
 */
#include "razionali.h"

int main(void){
	struct fraz ris;
	
	struct fraz a = {1, 2};
	struct fraz b = {1, 2};
	fr_somma(&ris, &a, &b);

	struct fraz c = {1, 3};
	struct fraz d = {1, 2};
	fr_somma(&ris, &c, &d);

	struct fraz e = {4, 3};
	struct fraz f = {-6, 9};
	fr_somma(&ris, &e, &f);
	
	return 0;
}
