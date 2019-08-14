#include<stdio.h>
void fun(struct student)
{
    scanf("%s",S1.name);
}
int main()
{
    struct student
    {
        char name[10];
        char usn[11];
        int sem;
    };
    struct student S1;
    printf("enter students details\n");
    fun(S1);
    return 0;
}