// Swapping two numbers using temporary variables		
#include<stdio.h>
int main()

{
    int num1,num2;
    printf("Enter 1st number :");
    scanf("%d",&num1);
    printf("Enter 2nd number :");
    scanf("%d",&num2);
    num1=num1*num2;
    num2=num1/num2;
    num1=num1/num2;
    printf("1st number = %d \n 2nd number = %d",num1,num2 );
    return 0;
}		