/* -------------------------------
    Modul 3 - Luas Lingkaran
   -------------------------------
*/
#include<stdio.h>
int main()
{
    // Deklarasi Konstanta
    const float PHI = 3.14;
    // Deklarasi Variabel
    float jariJari;
    float luas;
    // Membuat input
    printf("Input jari-jari: ");
    scanf("%f", &jariJari);
    // MEnghitung luas lingkaran
    luas = PHI * (jariJari * jariJari);
    // Menampilkan Output
    printf("------------------------------------\n");
    printf("Jari-Jari       : %.2f \n", jariJari);
    printf("Nilai PHI       : %.2f \n", PHI);
    printf("Luas Lingkaran  : %.2f \n", luas);
    printf("------------------------------------\n");
    return 0;

}