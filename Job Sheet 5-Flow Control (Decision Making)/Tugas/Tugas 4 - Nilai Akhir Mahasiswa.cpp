/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

#define E 0
#define D 45
#define C 56
#define B 66
#define B_PLUS 86
#define A 81
#define A_PLUS 91
#define TOTAL_SCORE 100
#define TOTAL_KEHADIRAN 20
#define TOTAL_TUGAS 20
#define TOTAL_UTS 25
#define TOTAL_UAS 35

int main() {
    float kehadiran, tugas, uts, uas, total, nilaiAkhir;
    
    printf("Nilai Akhir Mahasiswa\n\n");
    
    printf("Masukkan nilai kehadiran: ");
    scanf("%f", &kehadiran);
    printf("Masukkan nilai tugas: ");
    scanf("%f", &tugas);
    printf("Masukkan nilai UTS: ");
    scanf("%f", &uts);
    printf("Masukkan nilai UAS: ");
    scanf("%f", &uas);

    total = TOTAL_KEHADIRAN * kehadiran / 100 + TOTAL_TUGAS * tugas / 100 + TOTAL_UTS * uts / 100 + TOTAL_UAS * uas / 100;

    nilaiAkhir = total / TOTAL_SCORE * 100;

    if (nilaiAkhir <= E) {
        printf("Maaf, anda tidak lulus!");
        printf("Nilai Akhir : E");
    } else if (nilaiAkhir <= D) {
        printf("Selamat! Anda lulus, tingkatkan lagi untuk kedepannya!\n");
        printf("Nilai Akhir : D");
    } else if (nilaiAkhir <= C) {
        printf("Selamat! Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
        printf("Nilai Akhir : C");
    } else if (nilaiAkhir <= B) {
        printf("Selamat! Anda lulus dengan nilai yang memuaskan!\n");
        printf("Nilai Akhir : B");
    } else if (nilaiAkhir <= B_PLUS) {
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
        printf("Nilai Akhir : B+");
    } else if (nilaiAkhir <= A) {
        printf("Selamat! Anda lulus dengan nilai yang sangat baik!\n");
        printf("Nilai Akhir : A");
    } else {
        printf("Selamat! Anda lulus dengan nilai yang paling bagus!\n");
        printf("Nilai Akhir : A+");
    }

    return 0;
}
