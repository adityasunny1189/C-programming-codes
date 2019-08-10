#include<stdio.h>
int main()
{
    struct date
    {
        unsigned int day:5;
        unsigned int month:4;
        short unsigned int year;
    }D1;

    short unsigned int x;

    printf("enter day: ");
    scanf("%hu",&x);
    D1.day = x;

    printf("enter month: ");
    scanf("%hu",&x);
    D1.month = x; 

    printf("enter year: ");
    scanf("%hu",&x);
    D1.year = x;

    printf("Today's date is %d-%d-%d\n",D1.day,D1.month,D1.year);

    if(D1.day == 28)
    {
        if(D1.month == 2)
        {
            if(D1.year % 4 == 0)
            {
                D1.day++;
            }
            else
            {
                D1.day = 1;
                D1.month++;
            }
        }
        else
        {
            D1.day++;
        }
        
    }

    else if(D1.day == 31)
    {
        if(D1.month == 12)
        {
            D1.day = 1;
            D1.month = 1;
            D1.year++;
        }
        else
        {
            D1.day = 1;
            D1.month++;
        }
    }

    else if(D1.day == 30)
    {
        if(D1.month == 4 || D1.month == 6 || D1.month == 9 || D1.month == 11)
        {
            D1.day = 1;
            D1.month++;
        }
        else
        {
            D1.day++;
        }
    }

    else
    {
        D1.day++;
    }
    

    printf("Tommorows date is %d-%d-%d\n",D1.day,D1.month,D1.year);

    return 0;
}


/*
                                    SAMPLE OUTPUT

    aditya@aditya-VivoBook-S14-X430UA:~/Desktop/c programming$ gcc bit_field_date.c 
    aditya@aditya-VivoBook-S14-X430UA:~/Desktop/c programming$ ./a.out
    enter day: 31
    enter month: 12
    enter year: 2019
    Today's date is 31-12-2019
    Tommorows date is 1-1-2020
    aditya@aditya-VivoBook-S14-X430UA:~/Desktop/c programming$ ./a.out
    enter day: 28
    enter month: 2
    enter year: 2019
    Today's date is 28-2-2019
    Tommorows date is 1-3-2019
    aditya@aditya-VivoBook-S14-X430UA:~/Desktop/c programming$ ./a.out
    enter day: 28
    enter month: 2
    enter year: 2020
    Today's date is 28-2-2020
    Tommorows date is 29-2-2020
    aditya@aditya-VivoBook-S14-X430UA:~/Desktop/c programming$ ./a.out
    enter day: 30
    enter month: 9
    enter year: 2019
    Today's date is 30-9-2019
    Tommorows date is 1-10-2019
    aditya@aditya-VivoBook-S14-X430UA:~/Desktop/c programming$ ./a.out
    enter day: 30
    enter month: 8
    enter year: 2019
    Today's date is 30-8-2019
    Tommorows date is 31-8-2019


 */