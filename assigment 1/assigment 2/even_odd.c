//Find even and odd numbers using condition operator (Ternary operator)						
#include<stdio.h>
int main(void)
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    num%2==0?printf("the gaven no. is even"):printf("the gaven no. is odd");
}