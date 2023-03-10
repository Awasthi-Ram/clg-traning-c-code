//Any program is through the keyboard. Write a program to determine whether the year is a leap year or not.						
#include<stdio.h>
int main(void)
{
    int year;
    printf("enter year: ");
    scanf("%d",&year);
    if(year%4==0)
    {
     printf("the gaven year is leap year");
    }
    else{
        printf("the gaven is not year is leap year");
    }
}