#include<stdio.h>
int main()
{
    struct date
    {
        unsigned int day:6;
        unsigned int month:6;
        unsigned int year;
    }D1 = {8,8,2019};
    printf("entered date is %d-%d-%d",D1.day,D1.month,D1.year);
    unsigned int month_arr[12] = [31,28,31,30,31,30,31,31,30,31,30,31];
    int days = 45;
    switch(D1.month)
    {
        case 2:
                if(D1.year % 4 == 0)
                {
                    printf("New Date is %d-%d-%d",);
                }
                else
                {
                    printf("New Date is %d-%d-%d",);
                }
                break;
        case 1:
        case 3:
        case 5:

    }
    return 0;
}