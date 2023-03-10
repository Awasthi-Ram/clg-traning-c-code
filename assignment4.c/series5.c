// 1+x+x^2+x^3+x^4...
#include<stdio.h>
int main(void)
{
    int num,i,power=0,x;
    int sum=1;

    printf("enter any no.");
    scanf("%d",&num);
    printf("enter the value of x ");
    scanf("%d",&x);

    for(i=1;i<=num;i++)
    {
        
        if(i==2)
        {
            power=1;
            sum=1;
            printf("%d %d\n",power,sum);
        }
            
        
        printf("%d   %d\n",power,sum);
        power=power*x;
        sum=sum+power;
    }
       printf("the sum of gaven series is %d",sum);
}