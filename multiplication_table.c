#include<stdio.h>
int main()
{
    int i;
    printf("enter the no whose multiplication table you want: ");
    scanf("%d",&i);
    for(int j = 1; j < 11; j++)
        printf("%d X %d = %d\n",i,j,i*j);
    
    printf("multiplication table from 15 to 20 is as follows\n");
    for(int k = 1; k < 11; k++)
    {
        for(int l = 15; l < 21; l++)
        {
            printf("%d X %d = %d\t",l,k,l*k);
        }
        printf("\n");
    }
    return 0;
}