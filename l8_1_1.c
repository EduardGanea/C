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

int Count(struct lista* prim,int x){
    struct lista *p;
    int nr=0;
    p=prim;
    while(p!=NULL){
        if(p->inf==x)
            nr++;
        p=p->adr;
    }
    return nr;
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
    printf("%d",Count(prim,x));

    return 0;
}
