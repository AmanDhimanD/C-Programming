#include<stdio.h>

int main(){
    char a[40];
    printf("Enter your Name:-");
    fgets(a,40,stdin);
    printf("Hello, %s",a);
    return 0;
}