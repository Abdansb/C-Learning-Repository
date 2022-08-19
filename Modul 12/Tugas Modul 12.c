/* Buat fungsi hitung nilai yang diinputkan
*  1+2+3+4+..+N
*  instruksi ditulis dalam program induk
*  perhitungan total dihitung dalam fungsi yang dibuat sendiri
*  cetak total dilakukan dalam induk
*/

#include<stdio.h>

void main()
{
    int bilangan, hasil;

    //Instruksi Input
    printf("Masukan Bilangan: ");
    scanf("%d", &bilangan);

    //Instruksi Cetak Output
    hasil = hitung(bilangan);
    printf("Hasil = %d", hasil);
}

int hitung(int angka)
{
    int i = 1;
    int mulai = 0;
    while (i <= angka)
    {
        mulai += i; //mulai = mulai + i
        i++;
    }
    return mulai;
}

