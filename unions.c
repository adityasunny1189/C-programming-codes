#include<stdio.h>
int main()
{
    union num
    {
        int no;
        char a;
    };
    union num N1;
    N1.no = 512;
    printf("%d",N1.no);
    return 0;
}