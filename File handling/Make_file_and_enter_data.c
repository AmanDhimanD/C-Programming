#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char *data="this is simple Test for text edit by ofopen";
    // fp = fopen("sample.txt","w"); 
    //w is use for write the text into file || File will be created into the binary mode (.txt,.excele,etc)
    //aprend is use for add text to the text file
    fp=fopen("sample2.txt","a");
    if(fp==NULL)
    {
        printf("File is not find");
    }
    else 
    {
        while(*data!='\0')
        {
              printf("\n");
            fputc(*data,fp);
            data++;
        }
        printf("File is created");
    }
    return 0;
}