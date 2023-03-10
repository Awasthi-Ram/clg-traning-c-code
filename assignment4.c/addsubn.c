// sum of n obb natural no -n even natural no.
#include<stdio.h>
int main(void)
{
    int num,i,sum=0;

    printf("enter any natural no.");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
           // printf("%d\n",sum);
        }
        else
        {
            sum=sum-i;
           // printf("%d\n",sum);
        }
        
    }
    printf("sum of gaven series is %d",sum);
}