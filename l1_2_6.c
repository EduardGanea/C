#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int i;

int main()
{
    for(i=1;i<=12;i++)
        printf("%d %.2f\n",i,sqrt(i));
    return 0;
}
