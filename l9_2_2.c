#include <stdio.h>
#include <stdlib.h>
void merge(int a[101],int l,int m,int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
        L[i]=a[l+i];
    for(i=0;i<n2;i++)
        R[i]=a[m+1+i];
    i=0;
    j=0;
    k=1;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=R[j];
        j++;
        k++;
    }
}
void MergeSort(int a[101],int l,int r){
    if(l<r){
        int m=(l+r)/2;
        MergeSort(a,l,m);
        MergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main()
{
    int n,a[101],i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    MergeSort(a,1,n);
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);

    return 0;
}
