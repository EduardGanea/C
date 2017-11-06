#include <stdio.h>
#include <stdlib.h>

int baza_10(int n,int q){
    int p=1;
    int nr=0;
    while(n!=0){
        int c=n%10;
       nr=nr+c*p;
       p=p*q;
       n=n/10;

    }
    return nr;
}

int baza_q(int n,int q){
    int nr=0,v[101],k=0,i;
    while(n!=0){
        k++;
        v[k]=n%q;
        n=n/q;

    }
    for(i=k;i>=1;i--){
        nr=nr*10+v[i];
    }
    return nr;
}
int main()
{
int n,p,q,nr;
scanf("%d %d %d",&n,&p,&q);
n=baza_10(n,p);
nr=baza_q(n,q);
printf("%d",nr);
    return 0;
}
