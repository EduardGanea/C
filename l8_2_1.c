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
struct lista* InsertNth(struct lista *prim,int x){
    struct lista *p,*q;
    int i=1;
    p=prim;
    while(p!=NULL&&i<x-1){
        p=p->adr;
        i++;
    }
    q=(struct lista*)malloc(sizeof(struct lista*));
    scanf("%d",&q->inf);
    if(p==prim){
        q->adr=prim;
        prim=q;
    }
    else{
        q->adr=p->adr;
        p->adr=q;
    }
    return prim;
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
    scanf("%d %d",&n,&x);
    prim=creare(n);
    prim=InsertNth(prim,x);
    afisare(prim);

    return 0;
}
