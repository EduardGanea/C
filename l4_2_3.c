#include <stdio.h>
#include <stdlib.h>

void reverse1(char *s){
  if(*s!=0){
    reverse1(s+1);
    printf("%c",*s);

  }
}
int main()
{
 char s[100];
 scanf("%s",s);
 reverse1(s);
    return 0;
}
