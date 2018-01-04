#include <stdio.h>
#include <stdlib.h>
void Bubblesort(int a[101],int n){
    int i,j,c;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(a[i]<a[j]){
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }

}

int main()
{
    int n,a[101],i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    Bubblesort(a,n);
    for(i=1;i<=n;i++)
        printf("%d ",a[i]);

    return 0;
}
