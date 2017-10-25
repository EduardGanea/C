#include <stdio.h>
#include <stdlib.h>
int n,a[101],Max,Min,i;
int main()
{
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    Max=Min=a[0];
    for(i=0;i<n;i++){
        if(Max<a[i])
            Max=a[i];
        if(Min>a[i])
            Min=a[i];
    }
    printf("%d %d",Max,Min);
    return 0;
}
