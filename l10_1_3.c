#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int LineCounter (char nameFile[]){
   FILE *f;
   char s[1001];
   f=fopen(nameFile,"r");
   int nr=0;
   while(fgets(s,1001,f)){
      nr++;
   }
   fclose(f);
   return nr;
}
int main()
{
   printf("%d",LineCounter("date1.in"));

    return 0;
}
