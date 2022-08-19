/* -------------------------------
    Modul 2 - Fungsi gets
   -------------------------------
*/
#include<stdio.h>

int main()
{
    // Deklarasi variabel
    char nama[50];
    char usia[3];
    char berat[5];

    // Menggunakan fungsi printf dan gets
    printf("Input Nama anda : ");
    gets(nama);
    printf("Input Usia anda : ");
    gets(usia);
    printf("Input Berat anda : ");
    gets(berat);

    // Menampilkan ouput
    printf("----------------------------\n");
    printf("Nama    : %s \n", nama);
    printf("Usia    : %s tahun \n", usia);
    printf("Berat   : %s kg \n", berat);

    return 0;
}
