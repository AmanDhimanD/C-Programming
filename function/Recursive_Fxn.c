#include <stdio.h>
int factorial(int num);
int main()
{
    int a = 5;
    // printf("Enter any number :->>");
    // scanf("%d",&a);
    printf("The Factorial of %d is %d", a, factorial(a));
    return 0;
}
int factroial(int num)
{
    if (num == 1)
        return (1);
    else
        return (num * factorial(num - 1));
}