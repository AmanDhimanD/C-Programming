#include <stdio.h>
#include <string.h>
int main()
{
    char a[10];
    printf("Enter any number :->> ");
    scanf("%s", &a);
    strlen(a);
    printf("length of string is %d.\n", strlen(a));

    char b[10];
    printf("Char B is %s \n ", strcpy(b, a));
    //Concatenation
    printf("Concatenation %s. ", strcat(a, b));

    return 0;
}