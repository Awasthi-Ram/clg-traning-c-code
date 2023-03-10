#include<stdio.h>
int main(void)
{
int dividend,divisor,quotient,remainder;
printf("enter dividend : ");
scanf("%d",&dividend);
printf("enter divisor : ");
scanf("%d",&divisor);
printf("Quotient = %d \n",dividend/divisor);
printf("remainder = %d \n",dividend%divisor);
}