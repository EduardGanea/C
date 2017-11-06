#include <stdio.h>
#include <stdlib.h>
int interchange(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    return a;
    return b;
}
int x,y;
int main()
{
  scanf("%d%d",&x,&y);
  printf("%d %d",interchange(x,y));
   return 0;
}
