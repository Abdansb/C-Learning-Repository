/* -------------------------------
    Modul 2 - Fungsi fgets
   -------------------------------
*/
#include <stdio.h>

int main()
{
    // Deklarasi variabel
    char nama[50];
    char usia[4];
    char berat[6];

    // Menggunakan fungsi printf dan fgets
    printf("Input Nama Anda : ");
    fgets(nama, sizeof(nama), stdin);
    printf("Input Usia Anda : ");
    fgets(usia, sizeof(usia), stdin);
    printf("Input Berat Anda : ");
    fgets(berat, sizeof(berat), stdin);

    // Menampilkan output
    printf("----------------------------\n");
    printf("Nama    : %s", nama);
    printf("Usia    : %s", usia);
    printf("Berat   : %s", berat);

    return 0;
}
