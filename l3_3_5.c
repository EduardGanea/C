#include <stdio.h>
#include <stdlib.h>
typedef struct Data{
    char nume[51];
    int daym;
    int dayw;
    int year;

};
typedef struct Time{
    int hours;
    int minutes;
    int seconds;
};
typedef struct data_and_time{
struct    Data data;
    struct Time timp;
};
struct Time addSecond(struct Time t){
   int x=t.hours*3600+t.minutes*60+t.seconds+1;
   t.seconds=x%60;
   t.minutes=x/60%60;
   t.hours=x/3600;
   return t;
}
int main()
{
    struct Time ti,tf;
    scanf("%d %d %d",&ti.hours,&ti.minutes,&ti.seconds);
    tf=addSecond(ti);
    printf("%d %d %d %d %d %d",ti.hours,ti.minutes,ti.seconds,tf.hours,tf.minutes,tf.seconds);

    return 0;
}
