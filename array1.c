#include<stdio.h>
int main()
{
    int a[100],n,i,s;
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
    printf("the element you want to search is : ");
    scanf("%d",&s);
    //LINEAR SEARCH
    for (i=0;i<n;i++)
    {
        if (a[i]==s)
        {
            printf("element found at position %d",i+1);
            exit (0);
        }
    }
    //END OF LINEAR SEARCH LOGIC

    printf("element not found");
}
