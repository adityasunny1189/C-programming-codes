#include<stdio.h>
int adi(int,int,int);
int main()
{
    int a,b,c,sum;
    printf("enter values of a,b and c : ");
    scanf("%d%d%d",&a,&b,&c);
    sum=adi(a,b,c);
    printf("sum is %d",sum);
}
int adi(int x,int y,int z)
{
    int d;
    d=x+y+z;
    return (d);
}
