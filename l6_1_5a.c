#include <stdio.h>
#include <stdlib.h>

char *strncpy(char *s,char*ct,int n)
{char *x=s;
   int ok=0;
   while(*ct!=0&&n!=0){
        if(*s==0)
           ok=1;
        *s=*ct;
         s++;
         ct++;
         n--;

   }
 if(ok==1)
    *s=0;
   if(n!=0)
    *s=0;
   return x;
}
int main()
{   char s1[101],s2[101];
    scanf("%s%s",s1,s2);
    int n;
    printf("%s",strncpy(s1,s2,n));
    return 0;
}
