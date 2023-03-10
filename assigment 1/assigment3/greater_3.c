					
#include<stdio.h>
int main(void)
{
    int num1,num2,num3;
    printf("enter any three no. :");
    scanf("%d%d%d",&num1,&num2,&num3);
    num1>num2 && num1>num3?printf("num1 is greater than num2 and num3"):num2>num1 && num2>num3?printf("num2 is greater than num1 and num3"):printf("num3 is greater than num2 and num1");
}