//array with pointer and function
#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
int div(int a, int b);
int main()
{
    int x, y, choice, result;
    int (*op[4])(int, int);
    op[0] = add;
    op[1] = sub;
    op[2] = mult;
    op[3] = div;
    printf("Enter Two integers:>>");
    scanf("%d %d", &x, &y);
    printf("Enter 0 for Add \nEnter 1 for Sub\nEnter 2 for Mult\nEnter 3 for Div\n");
    scanf("%d", &choice);
    result = op[choice](x, y);
    printf("\n %d", result);
    return 0;
}
int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mult(int x, int y)
{
    return x * y;
}
int div(int x, int y)
{
    if (y != 0)
        return x / y;
    else

        return 0;
}
