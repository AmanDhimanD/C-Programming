//ERROR
#include<stdio.h>
#define FINE for(i=0;i<=5;i++)\
            printf("%d",i);
int main()
{
    printf("%d",FINE);
    return 0;
}