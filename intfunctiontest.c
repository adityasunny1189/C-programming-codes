#include<stdio.h>
int main()
{
    void adi();
    int a=3;
    a=adi();
    printf("%d",a);
    return 0;
}
void adi()
{
    printf("hello world\n");
}
