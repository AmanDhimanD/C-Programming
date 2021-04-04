#include<stdio.h>
void sayhello();
int main(){
    int a;

    for(int a=0; a<=5 ;a++)
    {
        sayhello();
    }
    return 0;
}
void sayhello()
{
    static int num=1;
    printf("\nStatic Variable %d",num);
}