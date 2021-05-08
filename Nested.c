#include <stdio.h>
int main(int argc, char const *argv[])
{
    int book = 100;
    int copy = 50;
    int free_pencil;

    if (book > 99)
    {
        if (copy > 30)
            free_pencil = 1;
    }
    else
        free_pencil = 0;

    printf("Free pencil is %d.", free_pencil);

    return 0;
}
