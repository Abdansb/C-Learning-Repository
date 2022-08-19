/* ----------------------------------------
*    Modul 4 - Tugas
*   ---------------------------------------
*/
#include<stdio.h>

int main()
{
    // Variabel karyawan
    const int tunjangan = 300000;
    char nama[50];
    char golongan;
    float masakerja;
    // Upah bulanan
    int gajipokok;
    int upah;
    int bulan;
    // Pesangon
    int pesangon;

    // Input data karyawan
    printf("=================== Data Karyawan ====================\n");
    printf(" Nama Karyawan : ");
    scanf("%[^\n]s", &nama);
    getchar();
    printf(" Masa Kerja    : ");
    scanf("%f", &masakerja);
    getchar();
    printf(" Golongan      : ");
    scanf("%c", &golongan);
    getchar();

    // Penentuan pesangon
    if (masakerja < 1){upah = 1;}
    else if (masakerja >= 1 && masakerja < 2){bulan = 2;}
    else if (masakerja >= 2 && masakerja < 3){bulan = 3;}
    else if (masakerja >= 3 && masakerja < 4){bulan = 4;}
    else if (masakerja >= 4 && masakerja < 5){bulan = 5;}
    else if (masakerja >= 5 && masakerja < 6){bulan = 6;}
    else if (masakerja >= 6 && masakerja < 7){bulan = 7;}
    else if (masakerja >= 7 && masakerja < 8){bulan = 8;}
    else if (masakerja > 8){upah = 9;}
    else {printf("Jumlah pesangon tidak valid");}

    // Penentuan pesangon dari golongan
    switch (toupper(golongan))
    {
    case 'A':
        gajipokok = 2250000;
        break;
    case 'B':
        gajipokok = 1750000;
        break;
    case 'C':
        gajipokok = 1500000;
        break;
    case 'D':
        gajipokok = 1100000;
        break;
    default:
        printf("Data yang anda masukan salah! \n");
        break;
    }
    // Kalkulasi upah
    upah = gajipokok + tunjangan;
    pesangon = upah * bulan;

    // Output
    printf("\n================== Data Karyawan ===================\n");
    printf(" Nama Karyawan   : %s \n", nama);
    printf(" Masa Kerja      : %.1f tahun \n", masakerja);
    printf(" Golongan        : %c \n", golongan);
    printf("==================== Upah Bulanan ====================\n");
    printf("Gaji Pokok       : Rp. %d \n", gajipokok);
    printf("Tunjangan        : Rp. %d \n", tunjangan);
    printf("Upah per bulan   : Rp. %d \n", upah);
    printf("====================== Pesangon ======================\n");
    printf("Total Pesangon   : Rp. %d \n", pesangon);
    printf("======================================================\n");

    return 0;
}

