#include<stdio.h>
int main()
{
    union num
    {
        int no;
        char a[4];
    };
    union num N1;
    N1.no = 512;
    for(int i= 0 ; i<4; i++)
        printf("%d",N1.a[i]);
    printf("\n");
    return 0;
}