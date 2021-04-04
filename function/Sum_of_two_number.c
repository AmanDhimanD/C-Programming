#include<stdio.h>
int sum(int a,int b);
int main(){
    int a=4,res;
    int b=5;
    res=sum(a,b);
    printf("\nSum of Two Number is %d.",res);
    return 0;
}
int sum(int a,int b){
    a+=b;
    return(a);
}