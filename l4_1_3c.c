#include <stdio.h>
#include <stdlib.h>
int average(int a,int b,int c){
    int s;
    s=(a+b+c)/3;
    return s;
}
int x,y,z;
int main()
{
  scanf("%d%d%d",&x,&y,&z);
  printf("%d",average(x,y,z));
   return 0;
}
