#include<stdio.h>
void swap(int*, int*);
int main()
{
    int i = 4;
    printf("value of variable i = %d\n",i);
    printf("address of variable i = %u\n",&i);
    printf("value of i = %d\n",*(&i));

    int *j = &i;
    printf("value of variable j = %u\n",j);
    printf("address of pointer j = %u\n",&j);
    printf("value of i = %d\n",*j);
    printf("value of i = %d\n",*(*(&j)));

    int a = 10;
    int b = 29;
    printf("value of a is %d\nvalue of b is %d",a,b);
    swap(&a,&b);
    printf("\nvalue of a is %d\nvalue of b is %d",a,b);
    return 0;
}
void swap(int *a,int *b)
{
    int t;
    t = *(a);
    *a = *b;
    *b = t;
}