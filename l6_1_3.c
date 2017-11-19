#include <stdio.h>
#include <stdlib.h>

char *strcat(char *s,char*t)
{char *x=s;
    while(*s!=0)
         s++;
    while(*t!=0){
        *s=*t;
        s++;t++;
    }
    *s=0;
    return x;

}
int main()
{   char s1[101],s2[101];
    scanf("%s%s",s1,s2);
    printf("%s",strcat(s1,s2));
    return 0;
}
