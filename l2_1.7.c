#include <stdio.h>
#include <stdlib.h>
int n,i,Ok,d;

int main()
{
    scanf("%d",&n);
       Ok=1;
       if(n<2)
        Ok=0;
       for(d=2;d*d<=n;d++)
            if(n%d==0)
            Ok=0;
       if(Ok==1)
        printf("%d Este Prim",n);
       else
        printf("%d nu este prim",n);

    return 0;
}
