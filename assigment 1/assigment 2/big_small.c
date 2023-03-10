//Program to relate two integers using =, >, <						
#include<stdio.h>
int main(void)
{   
    int num1,num2;
    printf("enter any two. no : ");
    scanf("%d%d",&num1,&num2);
    if(num1 == num2)
    {
        printf("frist no. is equal to second no.");
    }
    else if(num1 > num2)
    {
        printf("frist no. is greater than second no.");
    }else
    {
        printf("frist no. is smaller than second no.");
    }

}