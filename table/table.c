#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j;
    for (i=2; i <= 3; i++)
    {
        for ( j=1; j <= 10;j++)
        {
            printf("\n%d X %d =%d",i,j,i*j);
        }
            printf("\n");
    }
    return 0;
}
