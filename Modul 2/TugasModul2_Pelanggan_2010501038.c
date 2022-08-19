/* -------------------------------
    Modul 2 - Tugas
   -------------------------------
*/
#include <stdio.h>

int main()
{
    char nama [50];
    char usia [5];
    char berat [5];
    char tinggi [5];
    char alamat[50];

    printf("=============== Form Input ===============\n");
    printf("Input Nama pelanggan        : ");
    scanf("%[^\n]s", &nama);
    getchar();
    printf("Input Usia <th>             : ");
    gets(usia);
    printf("Input Berat <kg>            : ");
    gets(berat);
    printf("Input Tinggi <cm>           : ");
    gets(tinggi);
    printf("Alamat Pelanggan            : ");
    fgets(alamat, sizeof(alamat), stdin);


    printf("=============== Cetak Output ==============\n");
    printf("Nama Pelanggan       : %s \n", nama);
    printf("Usia                 : %s tahun\n", usia);
    printf("Berat                : %s kg \n", berat);
    printf("Tinggi               : %s cm \n", tinggi);
    printf("Alamat               : %s ", alamat);

}
