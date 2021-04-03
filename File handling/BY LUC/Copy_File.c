#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fc, *fp;
    char ch;
    fc = fopen("tester.txt", "r");
    if (fc == NULL)
    {
        puts("ERROR");
        exit(1);
    }
    fp = fopen("tester2.txt", "w");
    if (fp = NULL)
    {
        puts("Error");
        fclose(fc);
        exit(2);
    }
    while (1)
    {
        ch = fgetc(fc);
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fputc(ch,fp);
        }
        fclose(fc);
        fclose(fp);
    }

    return 0;
}