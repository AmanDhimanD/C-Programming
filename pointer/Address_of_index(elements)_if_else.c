#include <stdio.h>

int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++)
    {
        if (i == 4)
            break;
        printf("\nAddress of array index elements %d is  %x.", a[i], &a[i]);
    }
    return 0;
}