#include<stdio.h>
int main()
{
    struct str1
    {
        int a;
        float b;
        char c;
    };
    // struct str1 st1;
    struct str2
    {
        int d;
        struct str1 st1;
    };
    struct str2 st2 = {2, 1, 1.5, 'A'};
    printf("%d %d %f %c",st2.d,  st2.st1.a,  st2.st1.b,  st2.st1.c);
    return 0;
}