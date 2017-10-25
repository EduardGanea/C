#include <stdio.h>
#include <stdlib.h>
int h1,m1,s1,h2,m2,s2,h,m,s,x;
int main()
{
    scanf("%d%d%d%d%d%d",&h1,&m1,&s1,&h2,&m2,&s2);
    x=h2*3600+m2*60+s2-h1*3600-m1*60-s1;
    s=x%60;
    m=x/60%60;
    h=x/3600;
    printf("%d %d %d",h,m,s);
    return 0;
}
