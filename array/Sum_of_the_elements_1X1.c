#include <stdio.h>

int main()
{
    int a[3] = {10, 20, 30};
    int total = 0;
    int b;

    for (b = 0; b < 3; b++)
    {
        printf("Element %d :- %d\n", b, a[b]);
        total = total + a[b];
    }
    printf("Sum of array elements is %d.\n", total);
    return 0;
}