/* ---------------------------------------
    Modul 4 - Percabangan SWITCH ... CASE
    Judul : Cek Upah
   ---------------------------------------
*/
#include<stdio.h>
#include<ctype.h>

int main()
{
    // Deklarasi Variabel
    char gol;

    // Membuat input
    printf("Inputkan Golongan (A/B/C): ");
    scanf("%c", &gol);

    // Cek Upah dengan Switch Case
    switch(toupper(gol)){
        case 'A':
            printf("\nUpah Rp.780000 \n");
            break;
        case 'B':
            printf("\nUpah Rp.620000 \n");
            break;
        case 'C':
            printf("\nUpah Rp.420000 \n");
            break;
        default:
            printf("\nSalah input golongan \n");
            break;
    }
    return 0;
}