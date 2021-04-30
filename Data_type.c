#include<stdio.h>
int main(int argc, char const *argv[])
{
    // %ld is variable use for type long int 
    // %lx is variable use for type long int unsigned
    printf("Size of Interger is %ld.",sizeof(int));
    printf("\nSize of Float is %ld.",sizeof(float));
    printf("\nSize of Double is %ld.",sizeof(double));
    printf("\nSize of Character is %ld.",sizeof(char));

    return 0;
}
