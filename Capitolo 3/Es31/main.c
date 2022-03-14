/* Author: Matteo Gianferrari
 * Data: 14/03/2022
 * Implementare la funzione che accetta due nomi di file come stringhe e deve aprire file_in in lettura binaria e file_out in scrittura binaria. La funzione deve
 * copiare tutti i caratteri del file file_in nel file file_out, ma in ordine inverso. La funzione ritorna 0 se non riesce ad aprire uno dei due file, 1 altrimenti.
 */
#include <stdio.h>
#include "capovolgi.h"

int main(void){
	int ret;
	
	ret = capovolgi("file1", "output1.txt");
	ret = capovolgi("file2", "output2.txt");
	ret = capovolgi("file3.sdf", "output3.txt");
	
	return 0;
}
