#include <stdio.h>
#include <stdlib.h>
int a[2][32];
void citire(int a[][31],int n){
  int i,j;
  for(i=0;i<2;i++)
      for(j=0;j<n;j++)
         scanf("%d",&a[i][j]);
}
void medie(int a[][31], double s[],int n){
  int i,j;
  for(i=0;i<2;i++){
        s[i]=0;
      for(j=0;j<n;j++)
        s[i]+=a[i][j];
      s[i]/=31.0;
  }

}
void max_min(int a[][31], int **Max, int **Min, int n){
  int j;
  *Max=a[0][0];
  for(j=1;j<n;j++)
    if(*Max<a[0][j])
       *Max=a[0][j];
  *Min=a[1][0];
  for(j=1;j<n;j++)
    if(*Min<a[1][j])
       *Min=a[1][j];
}

int main()
{  double s[2];
int n;
scanf("%d",&n);
    citire(a,n);
    medie(a,s,n);
    printf("%lf %lf\n",s[0],s[1]);
    int Max, Min;
    max_min(a,&Max,&Min,n);
    printf("%d %d\n",Max,Min);
    return 0;
}
