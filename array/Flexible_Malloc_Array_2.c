//Dynamically memory allocation
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, i, n;
    printf("Enter size of array :->>");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter value of %d element :-",i);
        scanf("%d",&ptr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("value of %d element is %d. \n",i,ptr[i]);
    }
    return 0;
}