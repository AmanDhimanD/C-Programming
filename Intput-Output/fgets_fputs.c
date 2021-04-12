#include <stdio.h>
int main()
{
    char str[20];
    puts("enter a string");
    fgets(str, 20, stdin); //gets by function
    puts(str);
    return 0;
}