/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main() {
    FILE *file = fopen("datamahasiswa.txt", "r");

    if (file == NULL) {
        printf("Gagal membuka file.");
        return 1;
    }

    char data[100];

    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }

    fclose(file);

    return 0;
}
