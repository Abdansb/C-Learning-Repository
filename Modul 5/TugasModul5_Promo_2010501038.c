#include <stdio.h>
#include <ctype.h>

int main()
{
    //Deklarasi Variabel
    char kode;
    int jumlah;
    float beli;
    float diskon;
    float diskon_tambahan;
    float harga1 = 65000;
    float harga2 = 130000;
    float harga3 = 84900;
    float total;


    //Tampilkan Daftar
    printf("=============== Daftar Promo ===============\n");
    printf(" A. Garam himalaya 1 kg\n");
    printf(" B. Gamis lengan panjang\n");
    printf(" C. Minyak Kelapa Barco 5 liter\n");
    printf("--------------------------------------------\n");
    //Input Data
    printf("Pilih Produk <A/B/C> : ");
    scanf("%c", &kode);
    getchar();
    printf("Jumlah yang dibeli <1-10> : ");
    scanf("%d", &jumlah);

    //Cek Produk
    printf("================ Cek Produk ================\n");
    switch(toupper(kode)){
        case 'A':
            printf(" Produk              : Garam himalaya 1 kg\n");
            printf(" Harga Satuan        : Rp. %.2f \n", harga1);
            printf(" Jumlah Beli         : %d \n", jumlah);
            if(jumlah >3){
                beli = harga1 * jumlah;
                total = (harga1 * jumlah) - 10000;
                printf(" Total Harga Beli    : Rp. %.2f \n", beli);
                printf(" Diskon              : Rp. 10000.00 \n");
                printf(" Diskon Tambahan     : Rp. 0.00 \n");
                printf(" Total Harga Akhir   : Rp. %.2f \n", total);
            } else if (jumlah >2){
                beli = harga1 * jumlah;
                total = (harga1 * jumlah) - 7500;
                printf(" Total Harga Beli    : Rp. %.2f \n", beli);
                printf(" Diskon              : Rp. 7500.00 \n");
                printf(" Diskon Tambahan     : Rp. 0.00 \n");
                printf(" Total Harga Akhir   : Rp. %.2f \n", total);
            } else{
                beli = harga1 * jumlah;
                total = (harga1 * jumlah) - 5000;
                printf(" Total Harga Beli    : Rp. %.2f \n", beli);
                printf(" Diskon              : Rp. 5000.00 \n");\
                printf(" Diskon Tambahan     : Rp. 0.00 \n");
                printf(" Total Harga Akhir   : Rp. %.2f \n", total);
            }
            break;
        case 'B':
            printf(" Produk              : Gamis Lengan Panjang\n");
            printf(" Harga Satuan        : Rp. %.2f \n", harga2);
            printf(" Jumlah Beli         : %d \n", jumlah);
            if(jumlah >2){
                beli = harga2 * jumlah;
                diskon = (harga2 * jumlah) * 0.25;
                diskon_tambahan = (harga2 * jumlah) * 0.12;
                total = harga2 * jumlah * 0.37;
            printf(" Total Harga Beli    : Rp. %.2f \n", beli);
            printf(" Diskon              : Rp. %.2f \n", diskon);
            printf(" Diskon Tambahan     : Rp. %.2f \n", diskon_tambahan);
            printf(" Total Harga Akhir   : Rp. %.2f \n", total);
            } else if (jumlah >1){
                beli = harga2 * jumlah;
                diskon = (harga2 * jumlah) * 0.25;
                diskon_tambahan = (harga2 * jumlah) * 0.07;
                total = harga2 * jumlah * 0.32;
            printf(" Total Harga Beli    : Rp. %.2f \n", beli);
            printf(" Diskon              : Rp. %.2f \n", diskon);
            printf(" Diskon Tambahan     : Rp. %.2f \n", diskon_tambahan);
            printf(" Total Harga Akhir   : Rp. %.2f \n", total);
            } else {
                beli = harga2 * jumlah;
                diskon = (harga2 * jumlah) * 0.25;
                total = harga2 * jumlah * 0.25;
            printf(" Total Harga Beli    : Rp. %.2f \n", beli);
            printf(" Diskon              : Rp. %.2f \n", diskon);
            printf(" Diskon Tambahan     : Rp. 0.00 \n");
            printf(" Total Harga Akhir   : Rp. %.2f \n", total);
            }
            break;
        case 'C':
            printf(" Produk         : Minyak Kelapa Barco 5 liter\n");
            printf(" Harga Satuan   : Rp. %.2f \n", harga3);
            printf(" Jumlah Beli    : %d \n", jumlah);
            if (jumlah >= 3){
                beli = harga3 * jumlah;
                diskon = (harga3 * jumlah) * 0.15;
                total = harga3 * jumlah * 0.15;
                printf(" Total Harga Beli    : Rp. %.2f \n", beli);
                printf(" Diskon              : Rp. %.2f \n", diskon);
                printf(" Diskon Tambahan     : Rp. 0.00 \n");
                printf(" Total Harga Akhir   : Rp. %.2f \n", total);
            } else{
                beli = harga3 * jumlah;
                printf(" Total Harga Beli    : Rp. %.2f \n", beli);
                printf(" Diskon              : Rp. 0.00 \n");
                printf(" Diskon Tambahan     : Rp. 0.00 \n");
                printf(" Total Harga Akhir   : Rp. %.2f \n", beli);
            }
            break;
    }
    return 0;
}
