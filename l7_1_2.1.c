#include <stdio.h>
#include <stdlib.h>
typedef struct nod{
    int inf;
    struct nod *adr;

};
struct nod *prim;
struct nod *creare(struct nod *prim,int n){
    struct nod *p,*ul;
    int i;
    prim=(struct nod *)malloc(sizeof(struct nod));
    scanf("%d",&prim->inf);
    ul=prim;
    for(i=2;i<=n;i++){
        p=(struct nod *)malloc(sizeof(struct nod));
        scanf("%d",&p->inf);
        ul->adr=p;
        ul=p;
    }
    ul->adr=NULL;
    return prim;
}
void afisare(struct nod *prim){
    struct nod *p;
    p=prim;
    while(p!=NULL){
        printf("%d ",p->inf);
        p=p->adr;
    }
    printf("\n");
}


int main()
{int n;
struct nod *prim;
scanf("%d",&n);
prim=creare(prim,n);
afisare(prim);

    return 0;
}
