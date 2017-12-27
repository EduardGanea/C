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

int pop(struct lista** prim){
    struct lista *p;
    if(prim!=NULL){
        int x=(*prim)->inf;
        p=*prim;
        *prim=(*prim)->adr;
        free(p);
        return x;
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
    printf("%d",pop(&prim));

    return 0;
}
