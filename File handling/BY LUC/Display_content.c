#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char ch;
    fp=fopen("read.txt","r");//fopen is use for open the file ("filename","read mode");
    while(1)
    {
        ch=fgetc(fp);   //fgetc read the character from the current pointer position 
        if(ch==EOF)     //EOF is end of file
            break;
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp); //fclose is use for close the file 
    return 0;
}