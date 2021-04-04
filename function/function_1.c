#include<stdio.h>
//function Prototype
int gm();
int gn();
int main(){
    //function call
    gm();
    gn();
    return 0;
}

//function definition
int gm()
{
    printf("Good Morning....\n");
}
int gn()
{
    printf("Good Night....\n");
}