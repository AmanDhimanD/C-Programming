#include<stdio.h>
int main(){
    int a=2;
    int *p;
    p=&a;
    printf("Value of a is %d. \n",a);
    printf("Address of a is %x. \n\n\n",&a);
    printf("Value of p is %d. \n",*p);
    printf("Address of p is %x. \n",p);
    return 0;
}