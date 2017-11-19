#include <stdio.h>
#include <stdlib.h>

char *strncat(char *s,char*ct,int n)
{char *x=s;

   while(*s!=0)
        s++;
   while(*ct!=0&&n!=0){
        *s=*ct;
        s++;
        ct++;
        n--;
   }
   *s=0;
   return x;
}
int main()
{   char s1[101],s2[101];
    int n;
    scanf("%s%s",s1,s2,&n);
    printf("%s",strncat(s1,s2,n));
    return 0;
}
