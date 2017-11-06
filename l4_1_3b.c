#include <stdio.h>
#include <stdlib.h>
int product(int a,int b,int c){
    int p;
    p=a*b*c;
    return p;
}
int x,y,z;
int main()
{
  scanf("%d%d%d",&x,&y,&z);
  printf("%d",product(x,y,z));
   return 0;
}
