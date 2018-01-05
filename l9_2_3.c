#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int partion(int a[101],int l,int h){
    int pivot=a[h];
    int i=l-1;
    int j;
    for(j=l;j<=h-1;j++){
        if(a[j]<=pivot){
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[h]);
    return i+1;
}
void quicksort(int a[101],int l,int h){
    if(l<h){
        int pi=partion(a,l,h);
        quicksort(a,l,pi-1);
        quicksort(a,pi+1,h);
    }
}
int main()
{
    int n,a[101],i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    quicksort(a,1,n);
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);

    return 0;
}
