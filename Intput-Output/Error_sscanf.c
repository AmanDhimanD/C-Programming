#include <stdio.h>
int main()
{
    int a;
    char pt[34];
    char str[34]="Ehhe";
    sscanf(str, "%d,%s,%s", &a, pt, str);
    printf("\nData is %s\n.", str);
    return 0;
}