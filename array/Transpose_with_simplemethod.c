#include <stdio.h>
#define ROW 2
#define COL 3
int main()
{
    int a[ROW][COL] = {1, 2, 3, 4, 5, 6}, i, j;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nTRANSPOSE------\n");
    int b[3][2];
    b[0][0]=a[0][0];
    b[0][1]=a[1][0];

    b[1][0]=a[0][1];
    b[1][1]=a[1][1];

    b[2][0]=a[0][2];
    b[2][1]=a[1][2];
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}