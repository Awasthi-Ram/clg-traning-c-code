//WAP to calculate n m
#include<stdio.h>
int main(void)
{
    int i=1,j=1,num,power,result;
    printf("enter any no.= ");
    scanf("%d",&num);
    printf("enter power of that no. = ");
    scanf("%d",&power);
    while(i<=power)
    {
        j=j*num;
        i++;
    }
    printf("power of num is = %d",j);

}