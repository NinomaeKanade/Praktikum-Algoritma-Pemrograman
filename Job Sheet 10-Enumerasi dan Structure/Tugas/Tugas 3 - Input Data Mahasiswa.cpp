/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>
#include <string.h>

#define MAX_MAHASISWA 20

struct Mahasiswa {
    int npm;
    char nama[50];
    char tgl_lahir[15];
    char alamat[50];
    int hp;
};

int main() {
    struct Mahasiswa data[MAX_MAHASISWA];
    int i = 0;
    char jawab[2];
                                                                                
    do {
        printf("NPM : ");
        scanf("%d", &data[i].npm);
        
        printf("NAMA : ");
        getchar(); 
        fgets(data[i].nama, sizeof(data[i].nama), stdin);
        data[i].nama[strcspn(data[i].nama, "\n")] = 0; 
        
        printf("TGL LAHIR (dd-mm-yyyy) : ");
        fgets(data[i].tgl_lahir, sizeof(data[i].tgl_lahir), stdin);
        data[i].tgl_lahir[strcspn(data[i].tgl_lahir, "\n")] = 0; 
        
        printf("ALAMAT : ");
        fgets(data[i].alamat, sizeof(data[i].alamat), stdin);
        data[i].alamat[strcspn(data[i].alamat, "\n")] = 0; 
        
        printf("HP : ");
        scanf("%d", &data[i].hp);

        printf("Mau memasukkan data lagi [y/t]? ");
        scanf("%s", jawab);
        getchar();
        
        i++;

    } while (jawab[0] == 'y' || jawab[0] == 'Y');

    printf("\nData Mahasiswa:\n");
    printf("%-10s %-25s %-15s %-25s %-10s\n", "NPM", "NAMA", "TGL LAHIR", "ALAMAT", "HP");
    for (int j = 0; j < i; j++) {
        printf("%-10d %-25s %-15s %-25s %d\n", data[j].npm, data[j].nama, data[j].tgl_lahir, data[j].alamat, data[j].hp);
    }

    return 0;
}
