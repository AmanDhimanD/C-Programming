//sum of array elements
//ERROR..................
#include <stdio.h>
int main()
{
    int a = 3, b, sum=0;
    int i;
    printf("Enter Total number of elements:->>");
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        printf("Enter elements of array %d is :->", i);
        scanf("%d", &b);
    }
        sum += b[i];
    printf("%d", sum);      
    return 0;
}