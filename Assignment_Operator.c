#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x=3;

    x+=3;
    printf("\nnumber is %d",x);
    x-=2;
    printf("\nnumber is %d",x);
    x*=4;
    printf("\nnumber is %d",x);
    x/=6;
    printf("\nnumber is %d",x);
    x%=3;
    printf("\nnumber is %d",x);
    
    return 0;
}
