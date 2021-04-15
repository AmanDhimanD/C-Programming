//sum of array 
#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum+=a[i];
    }
    printf("Sum of is %d.",sum);
    return 0;
}