/* ---------------------------------------
    Modul 5 - Percabangan Bersarang
    Judul : Menentukan Nilai Terbesar
   ---------------------------------------
*/
#include<stdio.h>

int main()
{
    // Deklarasi variabel
    float A, B, C;

    // Membuat input
    printf("Input Nilai A : ");
    scanf("%f", &A);
    getchar();
    printf("Input Nilai B : ");
    scanf("%f", &B);
    getchar();
    printf("Input Nilai C : ");
    scanf("%f", &C);
    getchar();

    // Cek nilai terbesar dari 3 nilai
    if(A > B) {
        if(A > C) {
            printf("Nilai Terbesar : %.2f \n", A);
        } else {
            printf("Nilai Terbesar : %.2f \n", C);
        }
    } else {
        if(B > C) {
            printf("Nilai Terbesar : %.2f \n", B);
        } else {
            printf("Nilai Terbesar : %.2f \n", C);
        }
    }
    return 0;
}