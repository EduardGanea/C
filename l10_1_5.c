#include <stdio.h>
#include <stdlib.h>
int LongestLineLength(){
FILE *f;
f=fopen("date.in","r");
    char s[101];
    int nr,Max;
    Max=0;
    while(fgets(s,101,f)){
        nr=strlen(s);
        if(nr>Max)
            Max=nr;
    }
    return Max;
    fclose(f);
}
int main()
{
    printf("%d",LongestLineLength());
    return 0;
}
