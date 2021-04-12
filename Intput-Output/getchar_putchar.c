//getchar and putchar stores the single character
#include <stdio.h>
int main()
{
    char ki;

    printf("Enter Any character:->>");
    ki = getchar();
    printf("YOU gives\n");
    putchar(ki);

    return 0;
}