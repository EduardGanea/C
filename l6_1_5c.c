#include <stdio.h>
#include <stdlib.h>

int strncmp(char *cs,char*ct,int n)
{

   while(*cs!=0&&ct!=0&&n!=0){
        if(*cs!=*ct)
            if(*cs<*ct)
             return -1;
            else
                return 1;
       cs++;   ct++;n--;
   }
   if(n==0)
    return 0;
     if(*cs!=0)
            return 1;
     if(*ct!=0)
        return -1;



}
int main()
{   char s1[101],s2[101];
    int n;
    scanf("%s%s",s1,s2,&n);
    printf("%d",strncmp(s1,s2,n));
    return 0;
}
