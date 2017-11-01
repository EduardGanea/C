#include <stdio.h>
#include <stdlib.h>
int caut_bin(int v[],int n,int x){
int st=0,dr=n-1;
while(st<=dr){
    int mid=(st+dr)/2;
    if(x==v[mid])
        return mid;
    else
        if(x<v[mid])
           dr=mid-1;
       else
          st=mid+1;
}
return -1;
}
int main()
{
    int n,v[101],x,i;
    scanf("%d",&n);
    for( i=0;i<n;i++)
        scanf("%d",&v[i]);
    scanf("%d",&x);
    printf("%d",caut_bin(v,n,x))   ;

    return 0;
}
