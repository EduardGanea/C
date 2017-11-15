#include <stdio.h>
#include <stdlib.h>
int x[101],i,n;

int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    for(i=1;i<n-1;i++){
        if(x[i]=(x[i-1]+x[i+1])/2){
            printf("%d ",x[i]);
        }


    }


   return 0;
}
