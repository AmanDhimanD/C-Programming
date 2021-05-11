#include<stdio.h>
int main(int argc, char const *argv[])
{
    int l,b;
    int area;

    printf("\nEnter Length of rectangle :- ");
    scanf("%d",&l);
    printf("\nEnter Breath of rectangle :- ");
    scanf("%d",&b);
    area=l*b;
    printf("\nArea Of rectangle is %d.",area);
    
    return 0;
}
