#include<stdio.h>
int main()
{
    struct STU
    {
        char name[20];
        char usn[20];
        char branch[10];
        int sem;
    }S1;

    int choice = 1;

    FILE *fp;
    fp = fopen("STUDENT_FILE.txt","w");
    fprintf(fp,"Name\tUSN\tBranch\tSem\n");
    printf("enter students details (Name usn branch sem)\n");
    while (choice == 1)
    {
        scanf("%s%s%s%d",S1.name,S1.usn,S1.branch,&S1.sem);
        fprintf(fp,"%s\t%s\t%s\t%d\n",S1.name,S1.usn,S1.branch,S1.sem);
        printf("Do you want to continue(0/1)\n");
        scanf("%d",&choice);
    }
    printf("\n");
    fclose(fp);
    
}