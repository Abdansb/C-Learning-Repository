/*----------------------------------
* Modul 6 - Perulangan Do ... While
* ----------------------------------
*/
#include <stdio.h>
 
int main(void)
{
  int i = 1;
  do {
    printf("%i ",i*3);
    i++;
  }
  while (i <= 5);
  return 0;
}