/*---------------------------
    Modul 2 - Fungsi printf
  ---------------------------
*/

#include<stdio.h>

int main()
{
    //Deklarasi variabel
    char nama[30] = "Doni Saputra";
    int usia = 23;
    char gender = 'L';

    // Menggunakan printf
    printf("Nama Saya       : %s \n", nama);
    printf("Usia Saya       : %d \n", usia);
    printf("Jenis Kelamin   : %c \n", gender);

    return 0;
}