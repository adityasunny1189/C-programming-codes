#include<stdio.h>
void readarray(int *n, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d\n",*n);
        n++;
    }
    printf("\n");
}
int main()
{
    int arr[100],size;
    int *n;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    printf("enter array elements\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("entered array is \n");
    n = &arr[0];
    readarray(n, size);
    return 0;
}