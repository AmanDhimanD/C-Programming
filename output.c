#include<stdio.h>
int main(int argc, char const *argv[])
{
    /*
     //putchar() Outputs a single character.
    char a = getchar();

    printf("Your Name :-");
    putchar(a);
    */
    char  b[20];
    gets(b);

    printf("\nYour project name is ");
    puts(b); //use for get  string value 

    return 0;
}
