/* Author: Matteo Gianferrari
 * Data: 20/02/2022
 * Implementare la funzione che accetta un puntatore ad una stringa C contenente il nome di un file da aprire in
 * modalita' lettura (testo). Nel file sono contenuti dei numeri interi. La funzione deve leggere tutti i numeri
 * contenuti nel file e ritornare il massimo. Il parametro file_name sara' sempre il nome di un file valido.
 */
#include <stdio.h>
#include "massimo.h"

int main(void){
	int i;
	
	i = cerca_massimo("max1.txt");
	i = cerca_massimo("max2.txt");
	i = cerca_massimo("max3.txt");
	
	return 0;
}
