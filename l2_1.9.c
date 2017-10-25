#include <stdio.h>
#include <stdlib.h>
char s[50];
int main()
{
    scanf("%s",s);
    if(strcmp("PIRATES",s)==0)
        printf("Home run!");
    else
        if(strcmp("STEELERS",s)==0)
        printf("Touchdown!");
    else
        if(strcmp("PENGUINS",s)==0)
        printf("Goal");
    else
        printf("You Lose");
  return 0;
}




