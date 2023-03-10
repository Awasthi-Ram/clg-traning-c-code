// fibonacci 
#include<stdio.h>
int main(void)
{
    int num,i,sum=0,a=0,b=1;
    printf("enter how long you want these series = ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        printf("%d\t",sum);
        a=b;
        b=sum;
        sum=a+b;
    }
}