/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "pass"; 
    char input[50];
    int attempts = 3; 
    
    while (attempts > 0) {
        printf("Masukkan password: ");
        gets(input);
        attempts--;

        if (strcmp(input, password) == 0) {
            printf("berhasil login\n");
            break;
        } else {
            printf("Password salah\n");
        }
    }

    return 0;
}
