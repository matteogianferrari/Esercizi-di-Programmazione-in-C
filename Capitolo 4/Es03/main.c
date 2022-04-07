/* Author: Matteo Gianferrari
 * Data: 07/04/2022
 * Implementare la funzione che accetta come parametri
 */
#include <stdio.h>
#include <stdlib.h>
#include "stringhe.h"

void main_test(const char *str, const char *vecchia, const char *nuova);

int main(void){
	main_test("qui cambia la parola cambia", "cambia", "sostituisci");
	main_test("qui cambia la parola cambia e basta", "cambia", "sostituisci");
	main_test("qui cambia la parola cambia e basta", "x", "sostituisci");
	
	main_test("qui cambia la parola cambia e basta", NULL, "sostituisci");
	main_test("qui cambia la parola cambia e basta", "cambia", NULL);
	main_test(NULL, "cambia", "sostituisci");
	
	main_test("", "cambia", "sostituisci");
	main_test("qui cambia la parola cambia e basta", "cambia", "");
	main_test("qui cambia la parola cambia e basta", "", "sostituisci");
	
	main_test("gli studenti sono felici di studiare", "felici", "poco contenti");
	main_test("ho trovato difficile l'esercizio sulle stringhe", "difficile", "facile");
	
	return 0;
}

void main_test(const char *str, const char *vecchia, const char *nuova){
	char *s;
	
	s = sostituisci(str, vecchia, nuova);
	
	printf((s == NULL) ? "NULL\n" : "\"%s\"\n", s);
	
	free(s);
}
