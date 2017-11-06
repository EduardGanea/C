#include <stdio.h>
#include <stdlib.h>
int addition(int a,int b,int c){
    int s;
    s=a+b+c;
    return s;
}
int x,y,z;
int main()
{
  scanf("%d%d%d",&x,&y,&z);
  printf("%d",addition(x,y,z));
   return 0;
}
