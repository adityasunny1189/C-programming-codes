#include<stdio.h>
int main()
{
    union num
    {
        int no;
        char a[4];
    };
    union num N1;
    N1.no = 12000;
    // printf("%d",N1.no);
    for(int i= 0 ; i<4; i++)
        printf("%d\n",N1.a[i]);
    printf("\n");
    printf("%d",sizeof(int));
    printf("\n");
    return 0;
}