#include <stdio.h>
#include <stdlib.h>
typedef struct nod{
    int inf;
    struct nod *adr;

};
struct nod *creare(struct nod *prim,int n){
    struct nod *p,*ul;
    int i;
    prim=(struct nod *)malloc(sizeof(struct nod));
    scanf("%d",&prim->inf);
    prim=NULL;
    for(i=1;i<=n;i++){
        p=(struct nod *)malloc(sizeof(struct nod));
        scanf("%d",&p->inf);
        if(prim==NULL)
            prim=p;
        else
            ul->adr=p;
        ul=p;
    }
    ul->adr=prim;

}
void afisare(struct nod *prim){
    struct nod *p;
    p=prim;
    do{
        printf("%d ",p->inf);
        p=p->adr;
    }while(p!=prim);
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
