#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
FILE *f,*q;
char ch;
int main()
{
    f=fopen("date.in","r");
    q=fopen("date1.in","w");
    while((ch=fgetc(f))!=EOF){
        if(islower(ch))
           ch=ch-32;
       fputc(ch,q);
    }

    fclose(f);

    fclose(q);
    return 0;
}
