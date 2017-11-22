#include <stdio.h>
#include <stdlib.h>

int i;
int v[20];
int length;
int *min;
int *max;
void minmax(int a[],int *min,int *max )
{
    int i;
    for (i=0;i<length;i++)
    {

        if (*min>a[i])
            *min=a[i];
        if (*max<a[i])
            *max=a[i];
    }
}

int main()
{
    scanf ( "%d", &length );
    for ( i = 0 ; i < length ; i++ )
        scanf ( "%d" , &v[i] );
    min=max=v[0];
    int *min1=&min;
    int *max1=&max;
    minmax(v,min1,max1);
    printf ("%d %d",*min,*max);

    return 0;
}

