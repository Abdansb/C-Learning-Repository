/* ------------------------------------
     Modul 4 - Percabangan IF...ELSE
     Judul : Cek Suhu
   ------------------------------------
*/
#include<stdio.h>

int main()
{
    // Deklarasi Variabel
    float suhu;

    // Membuat input
    printf("Inputkan Suhu : ");
    scanf("%f", &suhu);

    // Cek Suhu dengan percabangan IF...ELSE
    if (suhu > 36){
        printf("\n------------------------------\n");
        printf("Suhu saat ini : %.2f \n", suhu);
        printf("Suhu Terlalu Tinggi \n");
        printf("--------------------------------\n");
    } else {
        printf("\n------------------------------\n");
        printf("Suhu saat ini : %.2f \n", suhu);
        printf("Suhu Suhu Masih Wajar \n");
        printf("--------------------------------\n");
    }
    return 0;
}