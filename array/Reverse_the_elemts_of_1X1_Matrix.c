//Reverse the array elements
#include <stdio.h>
#define MAX 4
int main()
{
    int a[MAX];
    int i;
    printf("Elements are:->>\n");
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Reverse number :->>\n");
    for (i = MAX - 1; i >= 0; i--)
    {
        printf("%d\n ", a[i]);
    }
    // printf("3 index %d",a[3]);
    return 0;
}
