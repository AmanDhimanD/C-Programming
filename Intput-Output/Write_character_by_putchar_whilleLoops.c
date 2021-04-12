#include<stdio.h>
int main(){
    char p[]="This is the Example";
    int i=0;
    while(p[i]!=0)
    {
        putchar(p[i]);
        i++;
    }

    return 0;
}