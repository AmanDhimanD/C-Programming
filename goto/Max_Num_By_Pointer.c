#include <stdio.h>
int call(int *, int *);
int main()
{
    int num, a, b;
    int *p, *q;
    printf("Program to find max number.......\n");
label:
    printf("Enter 1 for max by simple (pointer) & \t 2 for call by reference\n  ");
    scanf("%d", &num);

    if (num == 1)
    {
        printf("\nEnter any number :->> ");
        scanf("%d", &a);
        printf("\nEnter any number :->> ");
        scanf("%d", &b);
        if (a > b)
        {
            printf("\n%d is greater.", a);
        }
        else if (a == b)
        {
            printf("\n Both are equal.");
        }
        else
        {
            printf("\n%d is greater.", b);
        }
    }
    else if (num == 2)
    {
        call(&a, &b);
    }
    else
    {
        int zero;
        printf("\nWrong choose\n\t\tPress 0 for run Again");
        scanf("%d", &zero);
        if (zero == 0)
        {
            printf("\n----Start again----\n");
            goto label;
        }
        else
        {
            printf("Exit.....");
        }
    }
    return 0;
}
int call(int *x, int *y)
{   int p,q;
    printf("\nEnter any number :->> ");
    scanf("%d", &p);
    printf("\nEnter any number :->> ");
    scanf("%d", &q);
    x=&p;
    y=&q;
    if (*x > *y)
    {
        printf("\n%d is greater.", *x);
    }
    else
    {
        printf("\n%d is greater.", *y);
    }
}
