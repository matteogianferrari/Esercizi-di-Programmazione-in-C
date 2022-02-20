/* Author: Matteo Gianferrari
 * Data: 20/02/2022
 * Implementare la funzione che accetta una stringa zero terminata e deve verificare se rispetta il formato di una data in 
 * cui il giorno e il mese sono rappresentati da due cifre, l'anno da quattro e sono separati dal carattere '/'. La 
 * funzione ritorna 1 se il formato e' corretto, ' se il puntatore e' NULL o se la stringa non rispetta il formato indicato.
 */
#include <stdio.h>
#include "formato.h"

int main(void){
	int i;
	
	i = is_date("12/02/2014");
	i = is_date("12/02/14");
	i = is_date(NULL);
	i = is_date("");
	i = is_date("12345678");
	i = is_date("12345678901234567890");
	i = is_date("12-02-2014");
	
	return 0;
}
