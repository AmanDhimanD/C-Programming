/*strcat is use to join the string together with string.h libary */
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100] = "This is string concenternation ";
    char str2[100] = "added string number 2.";
    strcat(str1, str2);
    printf("%s\n", str1);

    strlwr(str1);
    printf("%s\n", str1); //copy the string and lower case

    strupr(str2);
    printf("%s\n", str2); //string and uppar case
    return 0;
}