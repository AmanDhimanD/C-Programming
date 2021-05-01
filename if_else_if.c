#include <stdio.h>
int main(int argc, char const *argv[])
{
    int per;
    printf("Enter Your Percentage:-",per);
    scanf("%d", &per);
    if (per >= 90)
    {
        printf("In TOP-10");
    }
    else if (per >= 80)
    {
        printf("In TOP-20");
    }
    else if (per >= 50)
    {
        printf("In TOP-30");
    }
    else
    {
        printf("YOu ARE IN 50 RANK");
    }

    return 0;
}
