#include<stdio.h>
#define ROW 2
#define COL 3
int main(){
    int a[ROW][COL]={1,2,3,4,5,6},i,j;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("----IT's REVERSE----\n");
    for(i=ROW-1;i>=0;i--)
    {
        for(j=COL-1;j>=0;j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}