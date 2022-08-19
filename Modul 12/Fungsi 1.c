/* Membuat fungsi bahasa C
*
*
*/


#include<stdio.h>
int ContohFunction() //camelcase
{
    for(int count = 0; count <=10; count++){
    printf("Hitung %i\n", count);
    }
    return 0;
}

int main()
{
    ContohFunction();

    return 0;
}
