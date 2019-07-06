#include<stdio.h>
int main()
{
    int a,b,e,f;
    int c,d;
    printf("enter value of  a   and b");
    scanf("%d%d",&a,&b);
    // c=a+b;
    // d=a-b;
    // if(c>0&&d>0)
    // {
    //     printf("%d\n%d",c,d);
    // }
    // else
    // {
    //     printf("%d\n%d",d,c);
    // }
    if (a>0&&b>0)
    {
        c=a+b;
        if(a>b)
        {
            d=a-b;
        }
        else
        {
            d=-(a-b);
        }
    }
    if (a>0&&b<0)
    {
        d=a-b;
        if(a>b)
        {
            c=a+b;
        }
        else
        {
            c=-(a+b);
        }
    }
    if(a<0&&b>0)
    {
        d=-(a-b);
        if(a>b)
        {
            c=-(a+b);
        }
        else
        {
            c=a+b;
        }
    }
    if(a<0&&b<0)
    {
        c=-(a+b);
        if(b>a)
        {
            d=-(a-b);
        }
        else
        {
            d=(a-b);
        } 
    }
    printf("%d\n%d",c,d);
}