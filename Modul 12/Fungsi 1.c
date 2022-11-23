#include <stdio.h>

void get_name(char *name)
{
    char *nama = name;
    printf("%s", nama);
}

int hitung_umur(int tahun_lahir)
{
    int umur;
    umur = 2022 - tahun_lahir;
    return umur;
}

void main(void)
{
    int tahun_lahir;
    char name[30];
    printf("masukan nama : ");
    scanf("%[^\n]%*c", &name);

    printf("masukan tahun lahir : ");
    scanf("%d", &tahun_lahir);

    printf("namanya adalah : \n");
    get_name(name);
    printf(", umurnya adalah : ");
    printf("%d Tahun", hitung_umur(tahun_lahir));
}
