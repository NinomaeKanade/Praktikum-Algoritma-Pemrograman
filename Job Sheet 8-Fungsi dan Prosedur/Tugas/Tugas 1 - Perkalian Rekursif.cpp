/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int perkalian(int a, int b) {
    if (b == 1) {
        return a;
    } else {
        return a + perkalian(a, b - 1); 
    }
}

int main() {
    printf(" %d", perkalian(12, 6));
    return 0;
}
