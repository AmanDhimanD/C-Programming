#include <stdio.h>
int main()
{
    char ch[] = "Aman dhiman ";
    int i = 0;

    while (ch[i] != '\0') //'\0' is use to terminate the string; ! is make condiotion false, if con is false then it print the value else empty
    {
        printf("%c", ch[i]);
        i++;
    }
    printf("\n");
    return 0;
}