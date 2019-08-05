#include<stdio.h>
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
    return 0;
}