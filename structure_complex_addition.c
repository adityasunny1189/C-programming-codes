#include<stdio.h>
int main()
{
    struct complex
    {
        int real;
        int img;
    };
    struct complex c1,c2,c3;
    printf("enter the real and complex part of number\n");
    scanf("%d %d", &c1.real, &c1.img);
    printf("enter second complex number\n");
    scanf("%d %d", &c2.real, &c2.img);
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    printf("the sum of %d + i%d and %d + i%d is %d + i%d\n",c1.real,c1.img,c2.real,c2.img,c3.real,c3.img);
    return 0;
}