#include<stdio.h>
int main()
{
    int mobile_price,   money_to_spend,    bank_balence;
    float tax;
    printf("enter your bank balence\n");
    scanf("%d",&bank_balence);
    printf("enter your expenditure\n");
    scanf("%d",&money_to_spend);
    printf("enter the price of mobile\n");
    scanf("%d",&mobile_price);
    printf("enter tax\n");
    scanf("%f",&tax);
    int total_expenditure;
    while(total_expenditure < money_to_spend)
    {
        total_expenditure = total_expenditure + mobile_price;
    }
    printf("total expenditure without tax is %d\n",total_expenditure);
    total_expenditure = total_expenditure + total_expenditure * tax;
    if(total_expenditure < bank_balence)
    {
        printf("yes you can take the deal\n");
    }
    else
    {
        printf("you cant take the deal\n");
    }
}