/* Author: Matteo Gianferrari
 * Data: 11/03/2022
 * La funzione accetta due puntatori a stringhe contenenti due nomi di file. Il file_nomi deve essere aperto in lettura, mentre file_out deve essere 
 * aperto in scrittura binaria. file_nomi contiene un elenco di nomi di file separati da '\n'. Ogni file elencato deve essere aperto in modalita' 
 * lettura e l'intero contenuto, byte per byte, deve essere copiato in coda al file di output creato al'inizio. Dopo di che si chiude il file letto
 * e si passa al successivo. I nomi di file sono lunghi al massimo 255 caratteri. Se un file dell'elenco non si puo' aprire, si prosegue col successivo.
 */
#include <stdio.h>
#include "accoda.h"

int main(void){
	int ret;
	
	ret = accoda_tutti_file("elenco.txt", "output.txt");
	
	return 0;
}
