#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{

FILE *f;
char s[101],*p,sep[]=". ,;!?";
int nr=0;
f=fopen("date.in","r");
while(fgets(s,101,f)){
    p=strtok(s,sep);
    while(p!=NULL){
        nr++;
        p=strtok(NULL,sep);
    }
}
fclose(f);

printf("%d",nr);


    return 0;
}
