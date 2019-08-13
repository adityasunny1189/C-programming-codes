#include<stdio.h>
int main()
{
    union num
    {
        int no;
        // char a[4];
        char b;
    };
    union num N1;
    N1.b = 'B';
    printf("%d",N1.no);
    // N1.no = 512;
    // for(int i= 0 ; i<4; i++)
    //     printf("%d\n",N1.a[i]);
    printf("\n");
    return 0;
}