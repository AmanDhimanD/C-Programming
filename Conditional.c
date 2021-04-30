#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    int b=20;
    a = (b==10) ? 10 : a;
    printf("%d",b);

    printf("\n\nNEW PROGRAME DOWN SIDE");

    int age;
    printf("\nENTER YOUR AGE :-");
    scanf("%d",&age);
    (age>=18) ? (printf("You are eligible for vote.")) :(printf("Sorry,You are not eligible for vote"));


    return 0;
}
