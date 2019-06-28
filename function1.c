#include<stdio.h>
void adi();
void aditya();
int pathak();
int main()
{
    printf("hello world\n");
    pathak();
}
int pathak()
{
    int a,b,c;
    printf("enter value of a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d\n",a+b*c);
    adi();
    aditya();
    return 0;
}
void adi()
{
    printf("hello\n");
}
void aditya()
{
    printf("world\n");
}
