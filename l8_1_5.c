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

int Sum(struct lista* prim){
    struct lista *p;
    p=prim;
    int s=prim->inf;
    while(p!=NULL){
        s=s+p->inf;
        p=p->adr;

    }
    return s;
}

struct lista *prim;
int main()
{
    int n;
    scanf("%d",&n);
    prim=creare(n);
    printf("%d",Sum(prim));

    return 0;
}
