#include <stdio.h>

#include <string.h>
#define n 10
int main()
{
 float ident[n][n];
 int row, col;

 row=0;col=0;
 int x=0;
for (;x<n*n;){
x++;
    if(row==col)
        ident[row][col]=1;
    else
        ident[row][col]=0;
        printf("%f ",ident[row][col]);
     if(x%n==0)
            {row++;
            col=0;
            printf("\n");
            }
            else
                col++;
}

    return 0;
}
