#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, sum = 0;
    int *ptr;
    printf("\nEnter any number :->>  ");
    scanf("%d", &a);
    ptr = (int *)malloc(a * sizeof(int));
    for (b = 0; b < a; b++)
    {
        printf("\nEnter elements %d:- ", (b + 1));
        scanf("%d", ptr + b);
    }
    for (b = 0; b < a; b++)
    {
        printf("Elements %d is %d\n", b, *(ptr + b));
    }
    int *reptr;
    printf("Enter number for add into arr :->\n");
    scanf("%d", &c);
    reptr = (int *)realloc(ptr, sizeof(int) * c);
    for (b = 0; b < c; b++)
    {
        printf("Enter re elements %d:- ", (b + 1));
        scanf("%d", reptr + b);
    }
    for (b = 0; b < c; b++)
    {
        printf("Re elements %d is %d\n", b, *(reptr +b));
    }
    free(ptr);
    return 0;
}