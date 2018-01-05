#include <stdio.h>
#include <stdlib.h>
int binarysearch(int a[101],int l,int r,int x){
    if(r>=1){
        int mid=(l+r)/2;
        if(a[mid]==x)
            return mid;
        if(a[mid]>x)
            return binarysearch(a,l,mid-1,x);
        return binarysearch(a,mid+1,r,x);
    }
    return -1;
}
int main()
{
    int n,a[101],i,x;
    scanf("%d%d",&n,&x);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("%d",binarysearch(a,1,n,x));


    return 0;
}
