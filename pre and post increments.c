#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=5,b=7,y,z;
    y=a++;
    printf("Value of y:->%d",y);
    printf("\nValue of a:->%d",a);
    printf("\nDecerments");
    z=b--;
    printf("\nValue of z:->%d",z);
    printf("\nValue of b:->%d",b);


    return 0;
}
