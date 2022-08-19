/* -------------------------------
    Modul 3 - Tugas
   -------------------------------
*/
#include <stdio.h>

int main()
{
    // Deklarasi variabel
    const int diskon = 30;
    char nama[50];
    char tanggal[20];

    // Variabel barang
    char item_1[20];
    char item_2[20];
    char item_3[20];
    char item_4[20];
    char item_5[20];

    int harga1;
    int harga2;
    int harga3;
    int harga4;
    int harga5;
    int subtotal;
    int total;
    char temp;

    printf("==================== Input Data Transaksi =================\n");
    printf("Input Nama Konsumen : ");
    scanf("%[^\n]s", &nama);
    printf("Input Tanggal Transaksi (DD/MM/YYYY/): ");
    scanf("%s", &tanggal);
    //printf("%s", &tanggal);

    printf("=================== Input Item Transaksi  =================\n");
    printf("Input Item 1        : ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &item_1);
    printf("Input Harga Item 1  : ");
    scanf("%d", &harga1);
    printf("\n");

    printf("Input Item 2        : ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &item_2);
    printf("Input Harga Item 2  : ");
    scanf("%d", &harga2);
    printf("\n");

    printf("Input Item 3        : ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &item_3);
    printf("Input Harga Item 3  : ");
    scanf("%d", &harga3);
    printf("\n");

    printf("Input Item 4        : ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &item_4);
    printf("Input Harga Item 4  : ");
    scanf("%d", &harga4);
    printf("\n");

    printf("Input Item 5        : ");
    scanf("%c", &temp);
    scanf("%[^\n]s", &item_5);
    printf("Input Harga Item 5  : ");
    scanf("%d", &harga5);
    printf("\n");

    // Kalkulasi
    subtotal = harga1 + harga2 + harga3 + harga4 + harga5;
    total = subtotal - (subtotal * diskon/100);

    // Cetak output
    printf("======================== Nota Belanja =====================\n");
    printf("Toko            : Pelangi Nusantara \n");
    printf("Konsumen        : %s \n", nama);
    printf("Transaksi       : %s \n", tanggal);
    printf("======================= Daftar Belanja ====================\n");
    printf("%s               : Rp %d \n", item_1, harga1);
    printf("%s               : Rp %d \n", item_2, harga2);
    printf("%s               : Rp %d \n", item_3, harga3);
    printf("%s               : Rp %d \n", item_4, harga4);
    printf("%s               : Rp %d \n", item_5, harga5);
    printf("======================== Total Bayar ======================\n");
    printf("Total Belanja   : Rp %d \n", subtotal);
    printf("Diskon          : %d.0 %% \n", diskon);
    printf("Total Bayar     : Rp %d.00 \n", total);
    printf("===========================================================");

    return 0;

}
