#include<stdio.h>

int main(){
    int *p,sum,i;
    int x[5]={1,2,3,4,5};
    i=0;
    p=x;
    printf("Elements  Value  address:->>\n\n");
    while(i<5)
    {
        printf("x[%d] %d %x\n",i,*p,p);
        sum+=*p;
        i++,p++;
    }

    printf("\nSum    =  %d\n",sum);
    printf("\n &x[0] =  %x\n",&x[0]);
    printf("\n p     =  %x\n",p);
    return 0;
}