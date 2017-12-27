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

int GetNth(struct lista* prim,int x){
    struct lista *p;
    int i=1;
    p=prim;
    while(p!=NULL&&i<x){
          p=p->adr;
          i++;
    }
    if(p!=NULL)
       return p->inf;
    else
        return -1;
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
    scanf("%d%d",&n,&x);
    prim=creare(n);
    //afisare(prim);
    printf("%d",GetNth(prim,x));

    return 0;
}
