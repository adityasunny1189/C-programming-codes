#include<stdio.h>

struct STU
    {
        char name[20];
        char usn[20];
        char branch[10];
        int sem;
    }S1;

void Read_file(FILE *fp);
void Display_file(FILE *fp);
void Search_data(FILE *fp, char s_usn[]);

int main()
{
    FILE *fp;
    char s_usn[15];
    Read_file(fp);
    Display_file(fp);
    printf("Enter the student usn to search\n");
    scanf("%s",s_usn);
    Search_data(fp,s_usn);
    return 0;
}

void Read_file(FILE *fp)
{
    int choice = 1;
    fp = fopen("STUDENT_FILE.txt","a");
    fprintf(fp,"Name\tUSN\t\tBranch\tSem\n");
    while (choice == 1)
    {
        printf("enter students details (Name usn branch sem)\n");
        scanf("%s%s%s%d",S1.name,S1.usn,S1.branch,&S1.sem);
        fprintf(fp,"%s\t%s\t%s\t%d\n",S1.name,S1.usn,S1.branch,S1.sem);
        // fwrite(&S1,sizeof(S1),1,fp);
        printf("Do you want to continue(0/1)\n");
        scanf("%d",&choice);
    }
    printf("\n");
    fclose(fp);
}

void Display_file(FILE *fp)
{
    char ch;
    fp = fopen("STUDENT_FILE.txt","r");
    while(ch != EOF)
    {
        ch = getc(fp);
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
}

void Search_data(FILE *fp, char s_usn[])
{
    fp = fopen("STUDENT_FILE.txt","r");
    int found = 0;
    while(!feof(fp))
    {
        if(s_usn == S1.usn)
        {
            printf("File Found\n");
        }
    }

}