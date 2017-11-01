#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int s,i,n;
int main()
{
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    s=s+i*i;
  printf("%d",s);
   return 0;
}
