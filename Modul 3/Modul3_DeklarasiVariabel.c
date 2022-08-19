/* -------------------------------
    Modul 3 - Deklarasi variabel
   -------------------------------
*/
#include <stdio.h>
int main ()
{
    // Deklarasi variabel
    char nama[50] = "Doni Saputra Wijaya";
    char asalSekolah[50] = "SMA Negeri 1 Semarang";
    char rombel = 'A';
    int usia = 18;
    float berat = 56.9;
    float tinggi = 176.3;

    printf("------------------------------------------\n");
    printf("Nama MAhasiswa  : %s \n", nama);
    printf("Asal Sekolah    : %s \n", asalSekolah);
    printf("Rombel          : %c \n", rombel);
    printf("Usia            : %d Tahun \n", usia);
    printf("Berat           : %.2f kg \n", berat);
    printf("TInggi          : %.2f cm \n", tinggi);
    printf("------------------------------------------\n");

    return 0;

}
