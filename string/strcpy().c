//Error


#include<stdio.h>
#include<string.h>
int main(){
    char t[100],target[100],*ch;
    printf("Enter about Your self:->>> ");
    scanf("[^\n]",t);
    strcpy(target,t);
    printf(" %s ",target);
    return 0;
}