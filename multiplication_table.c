#include<stdio.h>
int main()
{
    int i;
    printf("enter the no whose multiplication table you want: ");
    scanf("%d",&i);
    for(int j = 1; j < 11; j++)
        printf("%d X %d = %d\n",i,j,i*j);
    return 0;
}