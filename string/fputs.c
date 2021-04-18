#include<stdio.h>
#include<string.h>
int main(){
    char emp[100];
    printf("Enter name:-");
    gets(emp);
    strupr(emp);
    fputs(emp,stdout);
    printf(",is your name.\n");

    //puts is also 

    gets(emp);
    printf("Output gets by Put functions\n");
    puts(emp);
    return 0;
}