#include <stdio.h>
#include <stdlib.h>
typedef struct nod{
    char inf;
    struct nod *adr;

};
struct nod *prim1,*prim2;
struct nod *creare(struct nod *prim,int n){
    struct nod *p,*ul;
    int i;
    prim=(struct nod *)malloc(sizeof(struct nod));
    scanf("%c",&prim->inf);
    ul=prim;
    for(i=2;i<=n;i++){
        p=(struct nod *)malloc(sizeof(struct nod));
        scanf("%c",&p->inf);
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
        printf("%c ",p->inf);
        p=p->adr;
    }
    printf("\n");
}
struct nod  *concatenare(struct nod *prim1,struct nod *prim2){
    struct nod *p;
    p=prim1;
    while(p->adr!=NULL)
        p=p->adr;
    p->adr=prim2;
    return prim1;
}
int main()
{int n,m;
struct nod *prim1,*prim2;
scanf("%d\n",&n);
prim1=creare(prim1,n);
scanf("%d\n",&m);
prim2=creare(prim2,m);
prim1=concatenare(prim1,prim2);
afisare(prim1);

    return 0;
}
