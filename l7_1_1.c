#include <stdio.h>
#include <stdlib.h>

int length;
int *p;
int i;

int main()
{
    scanf ( "%d", &length );
    p = (int *) malloc( length * sizeof(int) );
    for ( i = 0 ; i < length ; i++ )
        scanf( "%d", &p[i] );
    for ( i = 0 ; i < length ; i++ )
        printf ( "%d " , p[i] );

    return 0;
}
