#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct lista{
   char inf;
    struct lista* adr;
};
struct lista* push(char x,struct lista* prim){

  struct lista *p=(struct lista*)malloc(sizeof(struct lista*));
    p->inf=x;
    p->adr=prim;
    prim=p;
    return prim;
}
struct lista* pop(struct lista* prim){
     struct lista* p;
     p=prim;
     prim=p->adr;
     free(p);
     return prim;
}
int determinare(struct lista* prim,char *s){
    int i=0;
    while(prim!=NULL&&s[i]!=0){
        if(s[i]!=prim->inf)
            return 0;
        i++;
        prim=prim->adr;
    }
    return 1;
}
char s[101];
struct lista *prim;
int main()
{
    scanf("%s",s);
    int i;
    //creez stiva
    prim=NULL;
    for(i=0;s[i]!=0;i++){
        prim=push(s[i],prim);
    }
    if(determinare(prim,s)==1)
        printf("DA");
    else
        printf("NU");

    return 0;
}
