#include<stdio.h>
int main(){
    int a[3][3]={17,345,2345,1234,456,233};
    int i,j,largest;    
    // largest=a[2][2]; //maybe optional
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]>largest)
            {
                largest=a[i][j];
            }
        }
    }
    printf("\nLargest element of array is %d .",largest);
    return 0;
}