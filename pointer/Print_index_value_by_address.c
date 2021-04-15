
// This is ans of solo learning code quiz
#include <stdio.h>

int main()
{
    int a[5] = {22, 33, 44, 55, 66};
    int *ptr = a;
    int res = *(ptr + 2);
    printf("%d", res);
    return 0;
}