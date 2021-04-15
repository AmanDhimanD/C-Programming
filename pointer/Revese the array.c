#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements:->>");
    scanf("%d", &n);
    int a[n], i = 0, sum = 0;
    for (i = 0; i < n; i++)
    {
        printf("Enter number %d:->>", i);
        scanf("%d", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("Element is %d. \n",a[i]);
    }
    printf("Reversed elemenst are\n");
    for (i = n - 1; i >= 0; i--)
        
    {
        printf("%d  ",a[i]);
    }
    return 0;
}