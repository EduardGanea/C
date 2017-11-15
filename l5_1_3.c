#include <stdio.h>
#include <stdlib.h>
int a[101][101],i,j,p1,s1,p2,s2,n;
int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
            p1=p2=1;
            s1=s2=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i<j&&i+j<n-1)
                p1=p1*a[i][j];
            else
                if(i>j&&i+j<n-1)
                    s1=s1+a[i][j];
            else
                if(i>j&&i+j>n-1)
                    p2=p2*a[i][j];
            else
                if(i<j&&i+j>n-1)
                    s2=s2+a[i][j];
        }
    }
    printf("%d %d %d %d",p1,s1,p2,s2);
    return 0;
}
