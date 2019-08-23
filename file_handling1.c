//                              Reading content of a file

#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    
    fp = fopen("a.out","rb");

    while(1)
    {
        ch = getc(fp);
        if(ch == EOF)
            break;
        
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}