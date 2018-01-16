#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>
int CharacterCounter  (char nameFile[]){
   FILE *f;
   char s[1001];
   f=fopen(nameFile,"r");
   int nr=0;
   while(fgets(s,1001,f)){
      nr+=strlen(s);
   }
   fclose(f);
   return nr;
}
int main()
{
   printf("%d",CharacterCounter ("date1.in"));

    return 0;
}
