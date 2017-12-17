#include <stdio.h>
#include <stdlib.h>
typedef struct nod{
   int  inf;
    struct nod *adr;

};
struct nod *prim1,*prim2;
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
struct nod  *interclasare(struct nod *prim1,struct nod *prim2){
    struct nod *p1,*p2,*p,*ul,*prim;
    p1=prim1;
    p2=prim2;
    prim=NULL;
    while(p1!=NULL&&p2!=NULL){
        p=(struct nod *)malloc(sizeof(struct nod));
        if(p1->inf<p2->inf){
            p->inf=p1->inf;
            p1=p1->adr;
        }
        else{
            p->inf=p2->inf;
            p2=p2->adr;
        }
       if(prim==NULL)
        prim=p;
       else
        ul->adr=p;
       ul=p;
        }

  while(p1!=NULL){
     p=(struct nod *)malloc(sizeof(struct nod));
     p->inf=p1->inf;
     ul->adr=p;
     ul=p;
     p1=p1->adr;
  }
   while(p2!=NULL){
     p=(struct nod *)malloc(sizeof(struct nod));
     p->inf=p2->inf;
     ul->adr=p;
     ul=p;
     p2=p2->adr;
  }
  ul->adr=NULL;
    return prim;
}
int main()
{int n,m;
struct nod *prim1,*prim2,*prim;
scanf("%d\n",&n);
prim1=creare(prim1,n);
scanf("%d\n",&m);
prim2=creare(prim2,m);
prim=interclasare(prim1,prim2);
afisare(prim);

    return 0;
}
