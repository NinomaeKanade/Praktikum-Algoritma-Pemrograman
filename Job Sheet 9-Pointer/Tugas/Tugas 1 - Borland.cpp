/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    char borland[6][8] = {"D", "ND", "AND", "LAND", "ORLAND", "BORLAND"};
    
    char (*ptr_borland)[8] = borland;

    for (int i = 0; i < 6; i++) {
        printf("%s\n", ptr_borland[i]);
    }
    return 0;
}
