#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{

FILE *f,*g;
f=fopen("date.in","r");
g=fopen("date1.in","w");
    char s[101];
int i;
    while(fgets(s,101,f)){
        for(i=0;i<strlen(s);i++){
            if(strcmp(argv[1],"mare")==0)
                {
                    if(s[i]>='a'&&s[i]<='z')
                        s[i]=s[i]-32;
                }
                else
                  if(s[i]>='A'&&s[i]<='Z')
                        s[i]=s[i]+32;
        }
       fprintf(g,"%s",s);
    }
   fclose(f);


fclose(g);
    return 0;
}
