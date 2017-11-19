#include <stdio.h>

#include <string.h>
int find_largest(int *a,int n){
    int i,Max=*a;
    for(i=1;i<n;i++)
        if(*(a+i)>Max)
           Max=*(a+i);
    return Max;
}
int main()
{
 int *a,n,i;
 scanf("%d",&n);
 a=(int *) malloc(sizeof(int)*n);
 for(i=0;i<n;i++)
    scanf("%d",a+i);
 printf("%d",find_largest(a,n));

    return 0;
}
