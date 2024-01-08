/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[100];
    
    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    printf("\nKebalikannya: ");
    for (int i = strlen(kalimat) - 1; i >= 0; i--) {
        printf("%c", kalimat[i]);
    }

    return 0;
}
