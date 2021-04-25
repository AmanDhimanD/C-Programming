//[^\n] is specifier is use to get dont know string length
#include <stdio.h>
int main()
{
    char a;
    scanf("[^\n]",&a);
    printf("%s",a);
    return 0;
}