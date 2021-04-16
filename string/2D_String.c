#include <stdio.h>
int main()
{
    char name[2][2];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
           scanf("%c %c ", &name[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {  
        for (j = 0; j < 2; j++)  
        {  
           printf("%c %c ", name[i][j]);
        }
        printf("\n");
    }
    return 0;
}