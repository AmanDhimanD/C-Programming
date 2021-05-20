/* 
< less than
<= less than or equal to
> greater than
>= greater than or equal to
== equal to
!= not equal to
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num = 45;
    num += 1;

    if (num < 33)
        printf("\nYou have a greater Number.");
    else
    {
        printf("\nYou have a smallest than 33 number.");
    }

    return 0;
}
