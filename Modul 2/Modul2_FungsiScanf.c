/* -------------------------------
    Modul 2 - Fungsi scanf
   -------------------------------
*/
#include <stdio.h>

int main()
{
    // Deklarasi variabel
    char nama[50];
    int usia;
    float berat;

    // Menggunakan fungsi printf dan scanf
    printf("Input Nama Anda : ");
    scanf("%[^\n]s", &nama);
    printf("Input Usia Anda : ");
    scanf("%d", &usia);
    printf("Input Berat Anda :");
    scanf("%f", &berat);

    printf("=============================\n");
    printf("Nama    : %s \n", nama);
    printf("Usia    : %d tahun \n", usia);
    printf("Berat   : %f kg \n", berat);

    return 0;
}
