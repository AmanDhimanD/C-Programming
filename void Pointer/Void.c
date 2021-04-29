#include<stdio.h>

int main(){
    int x=30;
    float y=34.4;
    char z='u';
    void *ptr;
    ptr=&x;
    printf("Address by %%x is %x.\n",&x);
    printf("Void ptr pointer is %d.\n",ptr);
    printf("Void ptr pointer is %d. (with void)\n",*((int*)ptr));
    ptr=&y;
    printf("Void ptr pointer is %f. (with void)\n",*((float*)ptr));
    ptr=&z;
    printf("Void ptr pointer is %c. (with void)\n",*((char*)ptr));

    return 0;
}