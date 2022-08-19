/*
*   -------------------------------------------
*       Tugas Modul 8 - pencetakan array
*   -------------------------------------------
*/
#include <stdio.h>

int main()
{
    int i, j, baris = 5;
    char A[15] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O'};
    int ukuran = sizeof A;
    for (j = 0; j <= baris; j++)  {
        for  (i = 0; i <= j; i++) {
            printf("%c", A[i]);
        }
        printf("\n");
    }
    return 0;
}
