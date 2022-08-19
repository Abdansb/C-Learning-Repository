#include <stdio.h>

int main()
{
    float A, B, C;
    printf("Input NIlai A : ");
    scanf("%f", &A);
    getchar();
    printf("Input NIlai B : ");
    scanf("%f", &B);
    getchar();
    printf("Input NIlai C : ");
    scanf("%f", &C);
    getchar();

    if(A>B) {
        if(A>C) {
            printf("Nilai Terbesar: %.2f \n", A);
        } else {
            printf("Nilai Terbesar: %.2f \n", C);
        }
    } else {
        if(B>C) {
            printf("Nilai Terbesar: %.2f \n", B);
        } else {
            printf("Nilai Terbesar: %.2f \n", C);
        }
    }
    return 0;
}
