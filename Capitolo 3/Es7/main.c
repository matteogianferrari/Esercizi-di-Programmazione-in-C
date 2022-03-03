/* Author: Matteo Gianferrari
 * Data: 03/03/2022
 * Implementare la funzione che accetta una stringa e deve verificare se rispetta il formato di un numero esadecimale in linguaggio C.
 * Un numero esadecimale corretto in C inizia con i due caratteri 0x o 0X seguiti da 1 a 8 cifre esadecimali (0...9,a...f,A...F).
 * La funzione ritorna 1 se il formato e' corretto, 0 se il puntatore e' NULL, o se la stringa non rispetta il formato indicato.
 */
#include <stdio.h>
#include "formato.h"

int main(void){
	int ret;
	
	ret = is_hex("0x1a");
	ret = is_hex("0X1a");
	ret = is_hex("0xff");
	ret = is_hex("0x1");
	ret = is_hex("0x123");
	ret = is_hex("0x1234");
	ret = is_hex("0x12345");
	ret = is_hex("0x12345678");
	ret = is_hex("0xaabbccdd");
	ret = is_hex("0xAABBCCDD");
	
	ret = is_hex("0x123456789");
	ret = is_hex("0xabcdefgh");
	ret = is_hex("0x");
	ret = is_hex("0X");
	ret = is_hex("0");
	ret = is_hex("0ab");
	ret = is_hex("Ciao sono sbagliato");
	ret = is_hex("");
	ret = is_hex("NULL");
	
	return 0;
}
