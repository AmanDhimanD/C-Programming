#include <stdio.h>
#include <string.h>
int main()
{
    char str[20] = {"hello string"};
    printf("%s\n", str);
    char str1[30] = {'w', 'i', 't', 'h'};
    char str2[20] = {'D', 'i', 'f', 'f', 'r', 'e', 'n', 't'};
    printf("%s %s \n", str1, str2);
    printf("length of string is %zu.\n", strlen(str));
    printf("length of string 1 is %zu.\n", strlen(str1));
    printf("length of string 2 is %zu.\n", strlen(str2));
    return 0;
}