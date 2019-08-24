#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp1;
    char str[50];
    fp1 = fopen("ABC.txt","w");
    while(strlen(gets(str)) > 0)
    {
        fputs(str,fp1);
        fputs("\n",fp1);
    }
    printf("\n");
    fclose(fp1);
    return 0;
}