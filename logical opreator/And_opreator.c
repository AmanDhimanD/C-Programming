#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter any Number Between 0-99:->>");
    scanf("%d", &a);

    if (a > 0 && a <= 99)
    {
        printf("\nNumber is %d.", a);
    }

  
    return 0;
}
