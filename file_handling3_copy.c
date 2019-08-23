#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp1, *fp2;
    char ch, new_file[40];
    printf("enter the source file name\n");
    gets(new_file);
    fp1 = fopen(new_file,"r");
    if(fp1 == NULL)
    {
        printf("file not found\n");
        exit(1);
    }
    fp2 = fopen("NW.txt","a");
    while(ch != EOF)
    {
        ch = getc(fp1);
        putc(ch,fp2);
    }
    printf("\n");
    fclose(fp1);
    fclose(fp2);
    return 0;
}