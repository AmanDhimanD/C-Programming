#include <stdio.h>
void swap(int *num1, int *num2);
int main()
{
    int a = 34;
    int b = 43;

    printf("The value of a is %d and b is %d.\n", a, b);
    swap(&a,&b);
    printf("\nAfter swap,the numbers are.......\n");
    printf("The value of a is %d and b is %d.\n", a, b);
    return 0;
}
void swap(int *num1, int *num2)
{   int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
