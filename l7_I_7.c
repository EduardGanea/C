#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct lista{
   char inf;
    struct lista* adr;
};
struct lista *creare(char *s){
    struct lista *prim,*p;
    int i;
    prim=NULL;
    for(i=0;s[i]!=0;i++){
        p=(struct lista*)malloc(sizeof(struct lista*));
        p->inf=s[i];
        p->adr=prim;
        prim=p;

    }
    return prim;
}
void afisare(struct lista *prim){
  struct lista *p;
  while(prim!=NULL){
    p=prim;
    printf("%c",p->inf);
    prim=p->adr;
    free(p);
  }

}
char s[101];
struct lista *prim;
int main()
{
    scanf("%s",s);
    prim=creare(s);
    afisare(prim);


    return 0;
}
