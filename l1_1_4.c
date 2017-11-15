#include <stdio.h>
#include <stdlib.h>
int n,m;


int main()
{
    scanf("%d%d",&n,&m);
    printf("%d+%d=%d\n",n,m,n+m);
    printf("%d*%d=%d\n",n,m,n*m);
    printf("%d-%d=%d\n",n,m,n=m);
    printf("%d/%d=%d\n",n,m,n/m);
    printf("%d/%d=%f\n",n,m,1.0*n/m);
    printf("%d%%d=%d",n,m,n%m);
    return 0;
}
