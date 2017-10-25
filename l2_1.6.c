#include <stdio.h>
#include <stdlib.h>
char getChar(){
char x;
scanf("%c",&x);
return x;
}
short int getshort(){
short int x;
scanf("%hi",&x);
return x;
}
float getfloat(){
float x;
scanf("%f",&x);
return x;
}
void ptrchar(char x){
    printf("%c",x);
}
void ptrshort(short int x){
    printf("%hi",x);
}
void ptrfloat(float x){
    printf("%f",x);
}
int main()
{
    ptrchar(getChar());
    printf("\n");

    ptrshort(getshort());
    printf("\n");
    ptrfloat(getfloat());
    printf("\n");


    return 0;
}
