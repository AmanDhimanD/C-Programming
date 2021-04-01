#include <stdio.h>

int main()
{
    int a[2][2], b[2][2], i, j, k, sum;
    printf("Enter elements of first matrix:--->>\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:--->>\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nFisrt matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond matrix\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
    printf("Sum Of matrix_______________\n");
     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum=sum+a[i][j]*b[i][j];
            printf("%d  ",sum);
        }
        printf("\n");
    }
    return 0;
}