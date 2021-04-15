#include <stdio.h>

int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};
    int *ptr = NULL;
    int i;
    ptr = a;
    for (i = 0; i < 6; i++)
    {
        printf("%d\n", *(ptr + i));
    }
    return 0;
}