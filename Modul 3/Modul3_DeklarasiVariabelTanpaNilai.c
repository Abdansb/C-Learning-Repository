/* -------------------------------
    Modul 3 - Deklarasi variabel
              Tanpa Nilai Awal
   -------------------------------
*/
#include <stdio.h>
int main ()
{
    // Deklarasi variabel
    char nama[50] = "Doni Saputra Wijaya";
    char asalSekolah[50] = "SMA Negeri 1 Semarang";

    // Deklarasi variabel tanpa nilai awal
    char rombel;
    int usia;
    float berat;
    float tinggi;

    // Inisialisasi nilai variabel
    rombel = 'A';
    usia = 18;
    berat = 56.9;
    tinggi = 176.3;

    // Mneampilkan output
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
