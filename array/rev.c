//reversal arry
#include<stdio.h>
#define MAX 5
int main(){
    int a[MAX]={1,2,3,4,5},i;
    for(i=0;i<MAX;i++)
    {
        printf("Elements are %d ....\n",a[i]);
    }
    for(i=MAX-1;i>=0;i--)
    {
        printf("Reverse Elements are %d ....\n",a[i]);
    }
    return 0;
}