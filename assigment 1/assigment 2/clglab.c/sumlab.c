//Write a program in C to read 10 numbers from keyboard and find their sum and average
#include<stdio.h>
int main(void)
{
    int i,sum=0;
    for(i=1;i<=10;i++)
    {
    scanf("%d",&i);
    sum=sum+i;
    
    }
    printf("sum = %d\n",sum);
    printf("avg=%.2f",(float)sum/10);
}