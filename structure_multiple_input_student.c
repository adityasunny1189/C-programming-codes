#include<stdio.h>
int main()
{
    struct student 
    {
        char name[30];
        char branch[10];
        int sem;
    };
    struct student stu[100];
    int n;
    printf("enter the no of student: ");
    scanf("%d",&n);
    printf("enter student details name branch and semester\n");
    for(int i=0; i<n; i++)
    {
        scanf("%s%s%d",stu[i].name,stu[i].branch,&stu[i].sem);
    }
    printf("students details are as follows\n");
    for(int i=0; i<n; i++)
    {
        printf("name: %s, branch: %s, semester: %d\n",stu[i].name,stu[i].branch,stu[i].sem);
    }
    return 0;
}