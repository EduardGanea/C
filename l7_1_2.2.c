#include <stdio.h>
#include <stdlib.h>
typedef struct nod{
    int inf;
    struct nod *urm,*pred;

};
struct nod *creare(struct nod *prim,int n){
    struct nod *p,*ul;
    int i;
    prim=(struct nod *)malloc(sizeof(struct nod));
    scanf("%d",&prim->inf);
    prim->pred=NULL;
    ul=prim;
    for(i=2;i<=n;i++){
        p=(struct nod *)malloc(sizeof(struct nod));
        scanf("%d",&p->inf);
        p->pred=ul;
        ul->urm=p;
        ul=p;
    }
    ul->urm=NULL;

}
void afisare(struct nod *prim){
    struct nod *p;
    p=prim;
    while(p!=NULL){
        printf("%d ",p->inf);
        p=p->pred;
    }
    printf("\n");
}
int main()
{
    int n;
    struct nod *prim;
    scanf("%d",&n);
    prim=creare(prim,n);
    afisare(prim);
    return 0;
}
