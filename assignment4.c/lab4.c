//lab4
#include<stdio.h>
int main(void)
{
    int num,i,j,factorial=1,a=1,sum=0,b=2;
    printf("enter any no.");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        factorial=1;
        for(j=1;j<=b;j++)
        {
            factorial*=j;
        }
         b+=2;
        printf("fact %d",factorial);
        if(a%2!=0)
        {
            sum+=factorial;
        }
        else
        {
            sum-=factorial;
        }
        
         a++;
    }
    printf("sum %d",sum);
}