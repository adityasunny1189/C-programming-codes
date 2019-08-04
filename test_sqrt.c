#include<stdio.h>
#include<math.h>
int main()
{
    int arr[6];
    for(int m = 0;m<6;m++)
    {
        scanf("%d",&arr[m]);
    }
    for(int i=1;i<6;i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
    for(int k=0;k<6;k++)
    {
        printf("%d",arr[k]);
    }
}