#include<stdio.h>
void say(int num_times);
int main(){
    void (*funptr)(int);
    funptr =say;
    funptr(5);
    return 0;
}
void say(int num_times)
{
    int k;
    for(int k=0;k<num_times;k++)
    printf("This is Pointer.\n");
}