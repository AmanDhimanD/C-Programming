#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("sample.c","r");
    if(fp==NULL)
    {
        printf("File is not find");
    }
    else 
    {
        while((ch=fgetc(fp))!=EOF)
        {
            printf("%c",ch);    
        }
    }
    return 0;
}