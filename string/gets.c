#include<stdio.h>
#include<string.h>
int main(){
    char name[30];
    printf("Enter Your Name :-");
    gets(name);
    strupr(name);
    printf("Name  is %s.",name);
    return 0;
}