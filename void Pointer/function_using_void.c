#include <stdio.h>
void *sqaure(const void *num);
int main()
{
    int x, sq;
    x = 6;
    sq = sqaure(&x);
    printf("%d sqaured is %d\n.", x, sq);
    return 0;
}
void * sqaure(const void *num)
{
    static int result;
    result = (*(int *)num) * (*(int *)num);
    return (result);
}
