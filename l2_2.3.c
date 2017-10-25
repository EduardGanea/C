#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float a,b,c,d,x1,x2;
int main()
{
   scanf("%f%f%f",&a,&b,&c);
   d=b*b-4*a*c;
   if(a!=0){
    if(d>0){
        x1=(-b-sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("x1=%f x2=%f",x1,x2);
    }
    else
    if(d==0){
        x1=-b/(2*a);
        printf("x1=x2=%f",x1);

    }
    else
        printf("Ecuatia nu are solutii reale");
   }
   else
    printf("Ecuatia nu e de gradul 2");
  return 0;
}




