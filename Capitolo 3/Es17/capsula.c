#include <stdio.h>
#include "capsula.h"

static void ripeti_char(FILE *f, char c, unsigned char n){
	while(n-- > 0)
		putc(c, f);
}

void capsula(FILE *f, unsigned char n){
	unsigned char i, j;
	
	ripeti_char(f, ' ', n);
	ripeti_char(f, '_', n);
	putc('\n', f);
	
	for(i = 0; i < n; i++){
		ripeti_char(f, ' ', n - 1 - i);
		putc('/', f);
		ripeti_char(f, ' ', n + 2 * i);
		putc('\\', f);
		putc('\n', f);
	}
	
	for(i = 0; i < n; i++){
		putc('|', f);
		ripeti_char(f, ' ', n * 3 - 2);
		putc('|', f);
		putc('\n', f);
	}
	
	for(i = n - 1; i > 0; i--){
		ripeti_char(f, ' ', n - 1 - i);
		putc('\\', f);
		ripeti_char(f, ' ', n + 2 * i);
		putc('/', f);
		putc('\n', f);
	}
	
	ripeti_char(f, ' ', n - 1);
	putc('\\', f);
	ripeti_char(f, '_', n);
	putc('/', f);
	putc('\n', f);
}
