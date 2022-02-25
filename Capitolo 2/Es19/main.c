/* Author: Matteo Gianferrari
 * Data: 25/02/2022
 * Implementare la funzione che invia a stdout la stringa passata come parametro circondandola con una cornicetta composta
 * dei caratteri \ e / agli spicoli e di - e | sui lati. Prima e dopo la stringa bisogna inserire uno spazio.
 */
#include "cornicetta.h"

int main(void){
	stampa_cornicetta("Ciao");
	stampa_cornicetta("Prova!");
	stampa_cornicetta("");
	stampa_cornicetta("Una riga un po' piu' lunga...");
	
	return 0;
}
