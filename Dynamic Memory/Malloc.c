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
        sum += *(ptr + b);
    }
    printf("\nSum of %d  ", sum);
    free(ptr);
    return 0;
}