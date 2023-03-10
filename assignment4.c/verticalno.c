//WAP to accept any number and print in vertically.
#include<stdio.h>
int main(void)
{
    int num,i,digit;
    printf("enter any no.");
    scanf("%d",&num);

    for(i=num;i>=0;i--)
    {
        digit=num%10;
        num=num/10;
        printf("%d\n",digit);
        i=num;
    }
}