// WAP to calculate simple interest
#include<stdio.h>
int main()
{
int amount,time;
float rate;
printf("enter amount = \n");
scanf("%d",&amount);
printf("enter rate of interest= \n");
scanf("%f",&rate);
printf("enter time taken = \n");
scanf("%d", time);
//   S.I=amount*rate*time/100
printf("simple interest of gaven amount is %f",(amount*rate*time)/100);
return 0;
}