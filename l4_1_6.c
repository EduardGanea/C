#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int Calc(int a,int b){
    return sqrt(a*a+b*b);
}
int Calc2(int a,int b){
    int c;
    c=a*a+b*b;
    return sqrt(c);
}
int x,y;
int main()
{
    scanf("%d%d",&x,&y);
    printf("%d %d",Calc(x,y),Calc2(x,y));
   return 0;
}
