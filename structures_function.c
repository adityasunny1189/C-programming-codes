#include<stdio.h>
void fun(struct student S1)
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
    fun(struct student S1);
    return 0;
}