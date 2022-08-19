/* -------------------------------
    Modul 3 - Operator Aritmatika
   -------------------------------
*/
#include <stdio.h>
int main()
{
    // Deklarasi variabel
    int x, y;
    int penjumlahan, pengurangan, sisabagi, perkalian;
    float pembagian;
    // Inisialisasi nilai
    x = 45;
    y = 6;
    // Operasi matematika
    penjumlahan = x + y;
    pengurangan = x - y;
    sisabagi    = x % y;
    perkalian   = x ^ y;
    pembagian   = x / y;
    // Menampilkan output
    printf("Hasil x + y = %d \n", penjumlahan);
    printf("Hasil x - y = %d \n", pengurangan);
    printf("Hasil x %% y = %d \n", sisabagi);
    printf("Hasil x * y = %d \n", perkalian);
    printf("Hasil x / y = %.2f \n", pembagian);

    return 0;
}
