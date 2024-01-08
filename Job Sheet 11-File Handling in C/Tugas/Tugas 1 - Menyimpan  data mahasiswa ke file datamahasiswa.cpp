/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main() {
   char nama[50];
    int nim;
    char jurusan[50];
    char prodi[50];

    FILE *file = fopen("datamahasiswa.txt", "w");

    if (file == NULL) {
        printf("Gagal membuka file.");
        return 1;
    }

    
    char input;
    int i = 1;

    do {
        printf("Masukkan data mahasiswa ke-%d\n", i);
        printf("Nama: ");
        scanf("%s", nama);

        printf("NIM: ");
        scanf("%d", &nim);

        printf("Jurusan: ");
        scanf("%s", jurusan);

        printf("Program Studi: ");
        scanf("%s", prodi);

        fprintf(file, "Data Mahasiswa ke-%d\n", i);
        fprintf(file, "Nama: %s\n", nama);
        fprintf(file, "NIM: %d\n", nim);
        fprintf(file, "Jurusan: %s\n", jurusan);
        fprintf(file, "Program Studi: %s\n\n", prodi);

        printf("Apakah Anda ingin memasukkan data lagi? (y/t): ");
        scanf(" %c", &input);

        i++;
    } while (input != 't');

    fclose(file);

    printf("Data mahasiswa berhasil disimpan ke dalam file datamahasiswa.txt.\n");

    return 0;
}
