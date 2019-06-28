#include<stdio.h>
void adi();
int aditya();
int pathak(int,int);
int main()
{
    int x,y,sm;
    printf("beginning of main function\n");
    adi();
    aditya();
    printf("enter two no\n");
    scanf("%d%d",&x,&y);
    sm = pathak(x,y);
    printf("the s is %d",sm);
}
void adi()
{
    printf("this is for test\n");
}
int aditya()
{
    int a,b,sum;
    printf("enter here begins function\n");
    printf("program to calculate sum\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("the sum is %d\n",sum);
}
int pathak(int s,int d)
{
    int f;
    f=s+d;
    return f;
}
