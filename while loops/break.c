#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=20;
    while(a>0){
        if(a==15)
        break;
        printf("%d\n",a);
        a--;
    }
    return 0;   
}
