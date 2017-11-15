#include <stdio.h>
#include <stdlib.h>
int n,i,j,k;
double a[201],b[201];

int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
       scanf("%lf",&a[i]);
       k=0;
    for(i=0;i<n-1;i++)
        {
            b[k]=a[i];
            k++;
            b[k]=(a[i]+a[i+1])/2.0;
            k++;

        }
      b[k]=a[n-1];
      k++;
    for(i=0;i<k;i++){

            printf("%.2lf ",b[i]);

     }
    return 0;
}
