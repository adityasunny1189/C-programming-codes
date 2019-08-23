#include<stdio.h>
#include<stdlib.h>

void read_file(char []);

void display_file(FILE *);

int main()
{
    FILE *fp;
    char File_name[39];
    printf("Reading File\n");
    printf("Enter file name to open\n");
    read_file(File_name);
    printf("\n");
    fp = fopen(File_name,"r");
    display_file(fp);
    printf("\n");
    fclose(fp);
    return 0;
}

void read_file(char File_name[])
{
    gets(File_name);
}

void display_file(FILE *fp)
{
    int nol = 0;
    if(fp == NULL)
    {
        printf("File not Found\n");
        exit(1);
    }
    printf("File found\n");
    printf("\n");
    char ch;
    while(ch != EOF)
    {
        ch = getc(fp);
        printf("%c",ch);
        if(ch == '\n')
            nol++;
    }
    printf("Number of lines in the file is %d",nol);
}