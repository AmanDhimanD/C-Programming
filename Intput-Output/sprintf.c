#include <stdio.h>
int main()
{
    int a = 10;
    char ch[20];
    float v = 20.35;
    char str[20];
    printf("Enter any name->> ");
    scanf("%s", &ch);
    printf("%d %s %f", a, ch, v);
    printf("\nBy \"Sprintf\"\n");
    sprintf(str, "%d %s %f", a, ch, v); //sprintf store all ahead values by it (function)
    printf("\n%s\n", str);
    return 0;
}