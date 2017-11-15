#include <stdio.h>
#include <stdlib.h>
int x[101],i,n,OK,r;

int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    r=x[1]-x[0];
    OK=1;
    for(i=1;i<n;i++){
        if(x[i]!=x[i-1]+r)
            OK=0;

    }
    if(OK==1)
        printf("%d",r);

   return 0;
}
