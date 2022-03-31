/* Author: Matteo Gianferrari
 * Data: 03/03/2022
 * Implementare la funzione che accetta come parametro una stringa di caratteri e una sequenza di caratteri 
 * (anch'essa sotto forma di stringa) e deve restituire un puntatore a lla prima occorrenza in s di un qualsiasi 
 * carattere presente  in list. Nel caso il carattere non sia presente, oppure se s o list sono vuote, deve ritornare NULL. 
 */
#include <stdio.h>
#include "cerca.h"

int main(void){
	char *p;
	
	p = cerca_primo("Prova di frase", "abc");
	p = cerca_primo("Prova di frase", "xyz");
	p = cerca_primo("Prova di frase", "");
	p = cerca_primo("", "abc");
	p = cerca_primo("Dov'e' la prima vocale?", "aeiou");
	
	return 0;
}
