#include<stdio.h>
int main()
{
    struct student
    {
        char name[10];
        char usn[12];
        int sem;
    };
    struct student s1;
    int x = sizeof(struct student);
    printf("size of structure variable is : %d",x);
    return 0;
}