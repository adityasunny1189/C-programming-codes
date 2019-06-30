#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    char op;
    printf("calculator\n");
    printf("MENU\n");
    printf("add = +\n");
    printf("sub = -\n");
    printf("mul = *\n");
    printf("div = /\n");
    printf("enter no 1\n");
    scanf("%d",&a);
    printf("enter no 2\n");
    scanf("%d",&b);
    printf("enter operator\n");
    scanf(" %c",&op);
    switch (op)
    {
        case '+':printf("addition is %d",a+b);
        break;
        case '-':printf("substraction is %d",a-b);
        break;
        case '*':printf("multiplication is %d",a*b);
        break;
        case '/':printf("division is %d",a/b);
        break;
        default:printf("wrong operator\n");
    }
}
