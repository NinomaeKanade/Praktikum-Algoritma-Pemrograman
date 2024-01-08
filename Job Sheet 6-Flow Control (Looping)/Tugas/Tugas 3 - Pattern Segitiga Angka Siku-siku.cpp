/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h>

int main(){	
    for (int i = 1; i <= 5; i++) { 
        int num = i;
        for (int j = 1; j <= i; j++) { 
            printf("%d ", num);
            num += i; 
        }
        printf("\n");
    }
}
