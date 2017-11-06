#include <stdio.h>
#include <stdlib.h>
int v[10], k,x[10],viz[10];
void back(int p){
  int i,j;
for(i=1;i<=k;i++)
  if(viz[i]==0){
      x[p]=i;
      viz[i]=1;
      if(p==k)
      {
          for(j=1;j<=k;j++)
            printf("%d",v[x[j]]);
          printf("\n");
      }
     else
        back(p+1);
    viz[i]=0;
  }



}
int main()
{
    int n;
    scanf("%d",&n);
    k=0;
    while(n!=0){
        k++;
        v[k]=n%10;
        n=n/10;
    }
    back(1);

    return 0;
}
