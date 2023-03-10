//1-x^2+x^3.....
#include<stdio.h>
int main(void)
{
    int num,i,sum=1,x,power=0;
    printf("enter any no. ");
    scanf("%d",&num);
    printf("enter the value of x = ");
    scanf("%d",&x);

    for(i=1;i<=num;i++)
    {
        if(i==2)
        {
            power=1,sum=1;
        }
        if(i%2==0)
        {
            power=power*x;
            sum=sum-power;
        }
        else{

        
        power=power*x;
        sum=sum+power;
        }
    }
    printf("the sum of gaven series is = %d",sum);
}