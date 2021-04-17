#include<stdio.h>
int convert_char_to_int(int);
int main(){
    char a;
    int num;
    printf("Enter any char number :->>");
    scanf("%c",&a);
    num=convert_char_to_int(a);
    printf("Character is %s and integer Value is %d. ",a,num);
    return 0;
}
int convert_char_to_int(int x)
{
    // int x;
    // int num=0;
    // int c-'0';
    return x-'0';
}