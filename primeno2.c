#include<stdio.h>
int main()
{
    int i,n,o;
    printf("enter n: ");
    scanf("%d",&n);
    for (i=1,o=0;i<=n;i++)
    {
        if (n%i==0)
            o++;
    }
    if (o==2)
        printf("prime");
    else
        printf("not prime");
    return 0;
}
