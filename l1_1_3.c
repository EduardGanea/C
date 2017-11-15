#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s1[101],s2[101];
int i,n,m;

int main()
{
    scanf("%s%s",s1,s2);
    n=strlen(s1);
    m=strlen(s2);
    for(i=0;i<n;i++)
        if(s1[i]>='a'&&s2[i]<='z')
        s1[i]=s1[i]-32;
    for(i=0;i<m;i++)
        if(s2[i]>='a'&&s2[i]<='z')
        s2[i]=s2[i]-32;
    printf("%s %s\n",s1,s2);
    for(i=0;i<n;i++)
        if(s1[i]>='A'&&s1[i]<='Z')
        s1[i]=s1[i]+32;
    for(i=0;i<m;i++)
        if(s2[i]>='A'&&s2[i]<='Z')
        s2[i]=s2[i]+32;
    printf("%s %s\n",s1,s2);
    return 0;
}
