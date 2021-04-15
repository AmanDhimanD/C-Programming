#include <stdio.h>

int main()
{
    int a = 34, b;
    int *p;
    p = &a;
    b = *p + 3;
    printf("%d",b);
    return 0;
}