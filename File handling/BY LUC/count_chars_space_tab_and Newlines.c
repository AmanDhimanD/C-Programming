#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int no_line = 0, no_tab = 0, no_char = 0, no_space = 0;
    fp = fopen("tester.txt", "r");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
        {
            break;
            no_char++;
        }
        if (ch == ' ')
        {
            no_space++;
        }
        if (ch == '\n')
        {
            no_line++;
        }
        if (ch == '\t')
        {
            no_tab++;
        }
    }
    fclose(fp);
    printf("Number of space = %d\n", no_space);
    printf("Number of line = %d\n", no_line);
    printf("Number of Tab = %d\n", no_tab);
    printf("Number of character = %d\n", no_char);
    return 0;
}