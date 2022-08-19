/* -------------------------------
    Modul 3 - Deklarasi konstanta
   -------------------------------
*/
#include <stdio.h>
int main()
{
    // Deklarasi konstanta
    const char GRADE = 'A';
    const float PHI = 3.14;

    // Inisialisasi nilai konstanta
    //GRADE = 'B';
    //PHI = '2.12';

    // Menampilkan output
    printf("-----------------------------------------\n");
    printf("Kategori Nilai  : %c \n", GRADE);
    printf("Nilai PHI       : %.2f \n", PHI);
    printf("-----------------------------------------\n");

    return 0;
}
