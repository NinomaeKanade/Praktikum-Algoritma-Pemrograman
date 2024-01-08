/*
tugas         : Final Project
programmer    : Rafli Arianto / 23343051
program       : Program untuk Berlangganan Gym
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//konstanta untuk batas maksimal data konsumen
#define MAKSIMAL_KONSUMEN 100

//tipe data bentukan untuk isi dari data konsumen
typedef struct {
    char id[4];
    char nama[50];
    char telepon[15];
    int durasi;
} Konsumen;

Konsumen konsumen[MAKSIMAL_KONSUMEN];
int jumlahKonsumen = 0;

//fungsi pembuatan ID tiga huruf kapital secara acak 
void pembuatanID(char *id) {
    srand(time(NULL));
    for (int i = 0; i < 3; i++) {
        id[i] = 'A' + rand() % 26;
    }
    id[3] = '\0';
    
}

//fungsi memasukan data konsumen baru
void tambahKonsumen() {
    if (jumlahKonsumen >= MAKSIMAL_KONSUMEN) {
        printf("Konsumen sudah mencapai batas maksimal.\n");
        return;
    }

    Konsumen konsumenBaru;
    printf("Masukan nama konsumen: ");
    scanf("%s", konsumenBaru.nama);
    printf("Masukan nomer telepon konsumen: ");
    scanf("%s", konsumenBaru.telepon);
    printf("Masukan durasi berlangganan (bulan): ");
    scanf("%d", &konsumenBaru.durasi);

    pembuatanID(konsumenBaru.id);
    printf("ID konsumen adalah: %s\n",konsumenBaru.id);

    konsumen[jumlahKonsumen++] = konsumenBaru;

    printf("Konsumen sudah didata.\n\n");
}

//fungsi hitung total biaya berlangganan konsumen berdasarkan jumlah bulan berlangganan
void hitungTotalHarga() {
    char id[4];
    printf("Masukan id konsumen: ");
    scanf("%s", id);

    int totalHarga = 0;
    for (int i = 0; i < jumlahKonsumen; i++) {
        if (strcmp(konsumen[i].id, id) == 0) {
            totalHarga = konsumen[i].durasi * 200000; // Assuming subscription fee is $50 per month
            break;
        }
    }

    printf("Total harga berlangganan konsumen : Rp.%d\n\n",  totalHarga);
}

//fungsi menampilkan data konsumen yang berlangganan
void konsumenYangBerlangganan() {
    for (int i = 0; i < jumlahKonsumen; i++) {
    printf("ID: %s\n", konsumen[i].id);
    printf("Nama: %s\n", konsumen[i].nama);
    printf("Telepon: %s\n", konsumen[i].telepon);
    printf("Durasi: %d bulan\n", konsumen[i].durasi);
    printf("--------------------\n");
    }
}

//fungsi menghitung durasi sisa waktu berlangganan konsumen
void durasiTersisa() {
    char id[4];
    printf("Masukan id konsumen: ");
    scanf("%s", id);

    int durasiTersisa = 0;
    for (int i = 0; i < jumlahKonsumen; i++) {
        if (strcmp(konsumen[i].id, id) == 0) {
            durasiTersisa = konsumen[i].durasi;
            break;
        }
    }

    printf("Durasi tersisa untuk konsumen : %d bulan\n\n", durasiTersisa);
}

//fungsi untuk pembatalan berlangganan konsumen
void pembatalanBerlangganan() {
    char id[4];
    printf("Masukan id konsumen untuk pembatalan: ");
    scanf("%s", id);

    int indeksKonsumen = -1;
    for (int i = 0; i < jumlahKonsumen; i++) {
        if (strcmp(konsumen[i].id, id) == 0) {
            indeksKonsumen = i;
            break;
        }
    }

    if (indeksKonsumen == -1) {
        printf("Tidak ada konsumen yang dimaksud.\n\n");
        return;
    }

    for (int i = indeksKonsumen; i < jumlahKonsumen - 1; i++) {
        konsumen[i] = konsumen[i + 1];
    }

    jumlahKonsumen--;

    printf("Pembatalan untuk konsumen sudah berhasil.\n\n");
}

//fungsi untuk cetak data konsumen baru ke dalam file .txt
void cetakDataKonsumenBaru() {
	FILE *file = fopen("KonsumenBaru.txt", "w");

    for (int i = 0; i < jumlahKonsumen; i++) {
    
   
    fprintf(file, "ID: %s\n", konsumen[i].id);
    fprintf(file, "Nama: %s\n", konsumen[i].nama);
    fprintf(file, "Telepon: %s\n", konsumen[i].telepon);
    fprintf(file, "Durasi: %d bulan\n", konsumen[i].durasi);
    fprintf(file, "--------------------\n");
   
    }
    
    fclose(file);
    
    printf("Data konsumen baru sudah tercetak pada file KonsumenBaru.txt.\n\n");
}

//fungsi untuk judul
void judul(){
	printf("Program Manajemen Langganan Gym\n\n");
}


int main() {
    int pilihan;
    
    judul();
    do {
        printf("1. Tambah Konsumen\n");
        printf("2. Hitung Total Harga Berlangganan\n");
        printf("3. Tampilkan Data Semua Konsumen\n");
        printf("4. Tampilkan Sisa Durasi Berlangganan\n");
        printf("5. Batalkan Langganan\n");
        printf("6. Cetak Data Konsumen Baru\n");
        printf("0. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tambahKonsumen();
                break;
            case 2:
                hitungTotalHarga();
                break;
            case 3:
                konsumenYangBerlangganan();
                break;
            case 4:
                durasiTersisa();
                break;
            case 5:
                pembatalanBerlangganan();
                break;
            case 6:
            	cetakDataKonsumenBaru();
            	break;
            case 0:
                printf("Keluar dari program.\n");
                break;
            default:
                printf("Pilih menu yang lain.\n");
                break;
        }
    } while (pilihan != 0);

    return 0;
}

