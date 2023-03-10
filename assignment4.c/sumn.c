// sum of n natural no.
#include<stdio.h>
int main(void)
{
    int num,i,sum=0;
    printf("enter any no.");
    scanf("%d",&num);

    for (i=1;i<=10;i++)
    {
        sum=sum+i;
    }
    printf("sum of n natural no. is %d",sum);
}