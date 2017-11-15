#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int n1,n2;


int main()
{
    scanf("%d%d",&n1,&n2);
    printf("%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n",sqrt(n1),sqrt(n2),pow(n1,n2),1.0/n1,1.0/n2);

    return 0;
}
