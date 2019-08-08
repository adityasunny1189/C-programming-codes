#include<stdio.h>
int main()
{
    struct date
    {
        unsigned int day:6;
        unsigned int month:6;
        unsigned int year;
    }D1 = {8,8,2019};
    // printf("enter date\n");
    printf("entered date is %d-%d-%d",D1.day,D1.month,D1.year);
    return 0;
}