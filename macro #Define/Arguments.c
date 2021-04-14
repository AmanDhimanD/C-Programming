#include<stdio.h>
#define AREA(x)(3.14*x*x)
int main(){
    float a=2,b;
    b=AREA(a);
    printf("%f",b);    
    return 0;
}