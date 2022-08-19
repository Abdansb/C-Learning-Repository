/* ---------------------------------------
    Modul 4 - Percabangan IF...ELSE IF...
    Judul : Cek Suhu
   ---------------------------------------
*/
#include<stdio.h>

int main(){
    // Deklarasi Variabel
    float suhu;

    // Membuat input
    printf("Inputkan Suhu: ");
    scanf("%f", &suhu);

    // Cek suhu dengan percabangan IF...ELSE...IF...
    if (suhu > 36){
        printf("\n------------------------------\n");
        printf("Suhu saat ini : %.2f \n", suhu);
        printf("Suhu Terlalu Tinggi \n");
        printf("--------------------------------\n");
    } else if (suhu >= 18){
        printf("\n------------------------------\n");
        printf("Suhu saat ini : %.2f \n", suhu);
        printf("Suhu Masih Wajar \n");
        printf("--------------------------------\n");
    } else if (suhu >= 10){
        printf("\n------------------------------\n");
        printf("Suhu saat ini : %.2f \n", suhu);
        printf("Suhu Makin Dingin \n");
        printf("--------------------------------\n");
    } else {
        printf("\n------------------------------\n");
        printf("Suhu saat ini : %.2f \n", suhu);
        printf("Suhu Terlalu Dingin \n");
        printf("--------------------------------\n");
    }
    return 0;
}