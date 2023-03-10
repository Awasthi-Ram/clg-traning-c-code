//Program to find the largest number amoung three numbers using nested if-else		
#include<stdio.h>
int main(void)
{
    double num1,num2,num3;
    printf("enter any three number");
    scanf("%lf%lf%lf",&num1,&num2,&num3);

    if (num1>num2 &&num1>num3)
    {
        printf(" num1 is the largest number %lf",num1);

    }else if(num2>num1 && num2>num3)
    {
        printf(" num1 is the largest number %lf",num2);

    }else
    {
        printf(" num1 is the largest number %lf",num3);
    }
    
}				