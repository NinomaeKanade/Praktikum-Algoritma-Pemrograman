/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main() {
	int lesley = 57082, layla, balmond;
	
    printf("Untuk pertanyaan A\n");
    layla = lesley;
    balmond = layla + 1;
    printf("Nilai Layla = %d\n", layla);
    printf("Nilai Balmond = %d\n\n", balmond);
	
    printf("Untuk pertanyaan B\n");
	int *ptr_layla = &lesley;
    balmond = *ptr_layla + 1;
    printf("Nilai Layla = %d\n", *ptr_layla);
    printf("Nilai Balmond = %d\n", balmond);
	
    return 0;
}

