#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[101];
int IsPalindrome(char s[]){
int st,dr;
st=0; dr=strlen(s)-1;
while(st<dr){
    if(s[st]!=s[dr])
         return 0;
    st++; dr--;
}
return 1;
}

int main()
{
  scanf("%s",s);
  printf("%d", IsPalindrome(s));
    return 0;
}
