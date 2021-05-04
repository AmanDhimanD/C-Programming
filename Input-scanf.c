#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    // & (ampersand) is use for get a address for number then print
    printf("Enter any One Numbers:- ");
    scanf("%d", &a);
    printf("\nYour Number is %d.", a); 

    int x,y;
    printf("\nEnter any two numbers:- ");
    scanf("%d %d", &x , &y);

    printf("\nSum of Two numbers is %d.", x+y);
    return 0;
}
