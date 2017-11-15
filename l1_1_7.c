#include <stdio.h>
#include <stdlib.h>


int main()
{
   int i = 412; int j = 100; double x = 987.654321;
   /(a) double a = i / j; double b = (double) (i / j); printf("\n a = %d", a); printf("\n b = %d", b); a=4 b=4.12
   /(b) double c = (int)(x * 10.0 + 0.5) / 10; printf("\n c = %d", c); c=987
   /(d) i = i / j; j = i / j; printf("\n i = %d", i); printf("\n j = %d", j); i=4 j=0
}
