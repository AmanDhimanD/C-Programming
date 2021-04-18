#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    char word_a[50] = "A";
    char word_b[50] = "B";
    int i;
    for (i = 1; i <= 5; i++)
    {
        strcpy(str, word_b);
        strcat(str, word_a);
        printf("%s\n", str);

        strcpy(word_a, word_b);
        strcpy(word_b, str);
    }
    return 0;
}