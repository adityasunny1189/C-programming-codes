#include<stdio.h>
int main()
{
    int a[100],n,i,s,l=0,m=0;
    printf("enter the no of elements you want in the given array\n");
    scanf("%d",&n);
    printf("write the desired elements\n");
    for (i=0;i<n;i++)
    {
        printf("the %d element is : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("the given array is : ");
    printf("{  ");
    for (i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("}\n");
    printf("the largest element of the given array is : ");
    l=a[i];
    for (i=0;i<n-1;i++)
	{
		if(l>a[i+1])
			{
				l=a[i];
			}
		else
			{
				l=a[i+1];
			}
	}
	printf("%d\n",l);
  m=a[0];
    for (i=0;i<n-1;i++)
	{
		if(m>a[i+1])
			{
				m=a[i+1];
			}
		else
			{
				m=m;
			}
	}
	printf("the smallest element of the given array is : %d\n",m);
  printf("program terminated\n");
}
