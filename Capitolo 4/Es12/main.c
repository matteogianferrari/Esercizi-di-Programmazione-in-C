/* Author: Matteo Gianferrari
 * Data: 19/03/2022
 * La funzione da implementare lavora con file audio campionati a 44100 Hz, stereo, in cui ogni campione è formato da 2 interi con segno
 * a 16 bit memorizzati in little endian, il primo corrispondente al valore per il canale sinistro, il secondo per il canale destro.
 * La funzione accetta come parametri un nome di un file da aprire in lettura binaria e un puntatore ad una struct audio e deve leggere
 * l'intero contenuto del file. Il numero di campioni è dato dal numero di interi a 16 bit presenti nel file divisio 2, dato che ci sono
 * 2 canali. La funzione ritorna 1 se è riuscita ad aprire e elggere il file audio correttamente, 0 altrimenti.
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "audio.h"


int main(void){
	struct audio a;
	
	if(!audio_read("audio.raw", &a)){
		printf("Errore durante la lettura\n");
		return -1;
	}
	
	free(a.left);
	free(a.right);
	
	return 0;
}
