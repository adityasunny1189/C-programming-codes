#include<stdio.h>
int main()
{
    struct STUDENT 
    {
        char name[100];
        char USN[20];
        char branch[20];
        int sem;
    };
    struct STUDENT s1;
    printf("enter student details name USN branch and sem\n");
    scanf("%s%s%s%d",s1.name,s1.USN,s1.branch,&s1.sem);
    printf("students details are as follows\n");
    printf("name: %s, USN: %s, branch: %s, semester: %d\n",s1.name,s1.USN,s1.branch,s1.sem);
    printf("\n");
    return 0;
}