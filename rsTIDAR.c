#include <stdio.h>
#include <ctype.h> // Header untuk switch case biar gausah caps lock


int main()
{
    // Variabel
    char nama[50];
    char alamat[50];
    char bpjs;
    char kamar;
    int inapHari;
    int kamarTerpilih; // harga kamar yang dipilih disimpan disini
    int totalBayar; // Variabel perhitungan biaya kamar
    char lagi; // variabel entry data lagi

    do  // Jalankan di dalam DO ketika entry data lagi 
    {
        // Input data
        printf("*********************************************************************\n");
        printf("**************************RUMAH SAKIT TIDAR**************************\n");
        printf("*********************************************************************\n");
        printf("                   Masukan Data Pasien Dibawah ini                   \n");

        printf("Masukan Nama Anda : ");
        scanf("%[^\n]s", &nama);
        getchar();

        printf("Masukan Alamat Anda : ");
        scanf("%[^\n]s", &alamat);
        getchar();

        printf("Apakah peserta BPJS [Y/N]: ");
        bpjs = getchar();

        printf("Masukan Lama inap : ");
        scanf("%d", &inapHari);
        getchar();

        printf("Jenis Kamar : \n");
        printf("        1. Kelas I \n");
        printf("        2. Kelas II \n");
        printf("        3. Kelas III \n");
        printf("Masukan pilihan anda [1-3] : ");
        kamar = getchar();

        // Menu kamar dengan fungsi switch
        switch(kamar){
            case '1':
                printf("\nKelas I \n");
                printf("150000 \n");        // jumlah harga hanya contoh
                kamarTerpilih = 150000;
                break;
            case '2':
                printf("\nKelas II \n");
                printf("200000 \n");
                kamarTerpilih = 200000;
                break;
            case '3':
                printf("\nKelas III \n");
                printf("250000");
                kamarTerpilih = 250000;
                break;
            default:
                printf("\nSalah input kamar \n");
                break;
        }

        printf("*********************************************************************\n");
        printf("**************************DATA PASIEN TIDAR**************************\n");
        printf("*********************************************************************\n");
        printf("Nama Pasien         : %s \n", nama);
        printf("Alamat              : %s \n", alamat);

        // jika bpjs = 'y' atau 'Y', string "jenis kepesertaan" ditampilkan
        switch(toupper(bpjs)){
            case 'Y':
                printf("Jenis Kepesertaan BPJS \n");
                break;
            default:
                break;
        }

        // Perhitungan harga akhir dan tampilkan
        totalBayar = inapHari * kamarTerpilih;
        printf("Total Bayar         : %d \n", totalBayar);
        getchar();
        // Perulangan kode pakai DO - WHILE
        printf("Ingin entry data lagi ? [Y/N] ");
        lagi = getchar();
        getchar();

    } while(lagi == 'Y' || lagi == 'y'); 
    /* Selama variabel 'lagi' berisi 'Y' atau 'y' 
       kode di dalam "do" di atas akan terus dijalankan
    */



}