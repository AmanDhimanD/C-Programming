#include<stdio.h>
#define MAX 10
int main(){
    int a[MAX];
    printf("Enter number :->>\n");
    for(int i=0;i<MAX;i++)
    {
        scanf("%d",&a[i]);
        printf("\t");
    }
        printf("\n");

    for ( int i = 0; i <MAX; i++)
    {
        printf(" %d Element is :- >>  %d\n",i, a[i]);
    }
    return 0;
}