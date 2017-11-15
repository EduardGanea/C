#include <stdio.h>
#include <stdlib.h>
int n,i,j;


int main()
{
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            printf("%d ",j);
    }
    return 0;
}
