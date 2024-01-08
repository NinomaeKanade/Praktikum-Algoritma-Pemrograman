/*
Nama  : Rafli Arianto
NIM   : 23343051
Prodi : Informatika
*/

#include <stdio.h> 


int main() {
    
    char nama[20], webAddress[30];
    
    printf("Nama: ");
    scanf("%s", &nama); 
    
    printf("Alamat web: ");
    scanf("%s", &webAddress); 
    
    printf("\n----------------------------\n");
    printf("Nama yang diinputkan: %s\n", nama); 
    printf("Alamat web yang diinputkan: %s\n", webAddress);
    
    return 0;
}
