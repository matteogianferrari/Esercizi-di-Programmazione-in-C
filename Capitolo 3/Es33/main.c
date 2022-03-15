/* Author: Matteo Gianferrari
 * Data: 15/03/2022
 * Entrambe le funzioni lavorano con file binari in cui ogni sample e' salvato come:
 * 1) un intero a 32 bit in little endian che contiene l'id_sample
 * 2) un array di 20 byte contenenti il nome_categoria come stringa
 * 3) un numero in virgola mobile a 64 bit codificato in formato IEEE 754 contenente l'accuracy
 * Entrambe le funzioni accettano un puntatore a file aperto in lettura/scrittura binaria e un puntatore ad un sample da scrivere
 * o da leggere. Le funzioni ritornano 1 se sono riuscite a scrivere o leggere un intero sample correttamente, 0 altrimenti. 
 * In particolare sample_leggi ritorna 0 se raggiunge la fine del file prima di aver letto interamente il sample.
 */
#include <stdio.h>
#include <stdlib.h>
#include "sample.h"

#define SIZE(arr) sizeof(arr) / sizeof(*arr)

int main(void){
	FILE *f;
	size_t i;
	
	struct sample arr[] = {
		{1, "cat1", 0.76},
		{2, "cat1", 0.32},
		{3, "cat4", 0.45},
		{4, "cat3", 0.92},
		{5, "cat4", 0.12}
	};
	
	if((f = fopen("samples1.bin", "wb")) == NULL){
		perror("samples1.bin");
		exit(-1);
	}
	
	for(i = 0; i < SIZE(arr); i++)
		sample_scrivi(f, arr + i);
	
	fclose(f);
	
	struct sample s;
	
	if((f = fopen("samples1.bin", "rb")) == NULL){
		perror("samples1.bin");
		exit(-2);
	}	
	
	while(sample_leggi(f, &s) != 0);
	
	fclose(f);
	
	return 0;
}
