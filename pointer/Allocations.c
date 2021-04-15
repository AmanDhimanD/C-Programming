#include<stdio.h>

int main(){
    int a=20;
    int *p=NULL;
    p=&a;
    printf("The address of a is %x.\n",&a);
    printf("Value of a is %d.\n",a);

    printf("The Address of p is %x.\n",p);
    printf("The value of  p is %d.\n",*p);

    return 0;
}