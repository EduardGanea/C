#include <stdio.h>
#include <stdlib.h>

long int total_sec;
int i;
void split_time(long int total_sec,int *hr,int *min,int *sec)
{
        *hr=total_sec / 3600;
        total_sec%=3600;
        *min=total_sec / 60;
        total_sec%=60;
        *sec=total_sec;
}

int main()
{
    scanf ( "%ld", &total_sec );
    int *h1,*m1,*s1;
    int h=0;
    int m=0;
    int s=0;
    h1=&h;
    m1=&m;
    s1=&s;
    split_time(total_sec,h1,m1,s1);
    printf ("%d %d %d ",*h1,*m1,*s1);

    return 0;
}


