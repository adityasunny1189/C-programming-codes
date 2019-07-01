#include<stdio.h>
int main()
{
int i,j,k,n;
printf("enter size of triangle\n");
scanf("%d",&n);
for(i=n;i!=0;i--)
{
for(j=1;j<=i;j++)
printf("^");
for(k=n;k>=i;k--)
printf(" ");
printf("\n");
}
}
