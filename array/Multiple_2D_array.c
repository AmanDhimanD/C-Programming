#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], sum[10][10], d[10][10];
    int i, j, r, c;
    printf("\nEnter number of Row :-");
    scanf("%d", &r);
    printf("\nEnter number of Column :-");
    scanf("%d", &c);
    printf("\nMatrix-A\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nMatrix-B\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nSum of Matrix\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            d[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                d[i][j] += a[i][k] * b[k][j];
            }
        }
        printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", d[i][j]);
        }
        printf("\n");
    }
    return 0;
}