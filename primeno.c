#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a no: ");
    scanf("%d",&n);
    for (i=2;i<=n-1;i++)
    {
     if (n%i==0)
     {
        printf("not prime");
        break;
     }
    }
    if (i==n)
        printf("prime");
    return 0;
}
