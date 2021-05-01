#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*single Word Get .......
     char a = getchar(); */

    char a[200];
    gets(a);
    // this is use for single word print
    // printf("Enter your name:- %c",a);

    printf("Enter Your Name:- %s",a); 
    return 0;
}
