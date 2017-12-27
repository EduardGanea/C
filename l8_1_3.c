#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct lista{
   int inf;
    struct lista* adr;
};
struct lista* creare(int n){
    struct lista *prim,*p,*ul;
    prim=NULL;
    int i;
    for(i=1;i<=n;i++){
        p=(struct lista*)malloc(sizeof(struct lista*));
        scanf("%d",&p->inf);
        if(prim==NULL)
            prim=p;
        else
            ul->adr=p;
        ul=p;
    }
    ul->adr=NULL;
    return prim;
}

struct lista* DeleteList(struct lista* prim){
    struct lista *p;
    while(prim!=NULL){
        p=prim;
        prim=p->adr;
        free(p);
    }
}

void afisare(struct lista *prim){
  while(prim!=NULL){
    printf("%d ",prim->inf);
    prim=prim->adr;
  }

}
struct lista *prim;
int main()
{
    int n,x;
    scanf("%d",&n);
    prim=creare(n);
    //afisare(prim);
    prim=DeleteList(prim);

    return 0;
}
