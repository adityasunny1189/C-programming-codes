#include<stdio.h>
int main()
{
    struct user
    {
        char name[20];
        int age;
        char sex;
    }U1;

    printf("                        _______________\n");
    printf("                       |     TANDY     |\n");
    printf("                       |_______________|\n");


    printf("Welcome i am tandy the chatbot\n");

    printf("please enter your details\n");

    printf("enter your name: ");
    scanf("%s",U1.name);
    printf("Your age: ");
    scanf("%d",&U1.age);
    printf("Your gender(M/F): ");
    scanf(" %c",&U1.sex);

    printf("Welcome %s\n",U1.name);
    printf("Your age is %d\n",U1.age);

    switch(U1.sex)
    {
        case 'M':printf("Hello %s i am eve\n",U1.name);break;
        case 'F':printf("Hello %s i am adam\n",U1.name);break;
        default:printf("You have selected wrong gender\n %s",U1.name);
    }
    return 0;
}