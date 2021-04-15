//sum of two num with pointer
#include<stdio.h>
int main(){
    int a,b,*p1,*p2;
    printf("Enter two number :->>");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    int sum=*p1+*p2;
    printf("Sum of two number is %d. \n",sum);
    printf("%x\n",p1);
    printf("%x\n",p2);
    printf("%x\n",&sum);
    return 0;
}