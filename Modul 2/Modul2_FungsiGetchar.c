/* -------------------------------
    Modul 2 - Fungsi getchar
   -------------------------------
*/
#include <stdio.h>

int main()
{
    // Deklarasi variabel
    char kelas;

    // Menggunakan fungsi printf dan getchar
    printf("Input kelas : ");
    kelas = getchar();

    // Menampilkan output
    printf("--------------------------\n");
    printf("Kelas Saya      : %c \n", kelas);

    return 0;
}
