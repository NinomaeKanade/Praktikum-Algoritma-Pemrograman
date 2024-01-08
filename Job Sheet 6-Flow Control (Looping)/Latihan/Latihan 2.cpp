/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    char ulangi = 'y';
    int counter = 0;

    while (ulangi == 'y') {
        printf("Apakah kamu ingin mengulang?\n");
        printf("Jawab (y/t) : ");
        scanf(" %c", &ulangi);  

        counter++;
    }

    printf("\n\n-------------\n");
    printf("Perulangan selesai.\n");
    printf("Kamu mengulang sebanyak %i kali", counter);

    return 0;
}
