//MALLOC function
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int max, i, *p;
    printf("Enter any number :->>");
    scanf("%d", &max);
    p = (int *)malloc(max * sizeof(int));
    for (i = 0; i <= 5; i++)
    {
        p[i] = i * i;
        printf("%d\n", p[i]);
    }

    return 0;
}