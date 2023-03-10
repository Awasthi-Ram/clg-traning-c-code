//1+x+x/2!......
#include<stdio.h>
int main(void)
{
    int num,i,power=1,x,factorial=1;
    float sum=0;
    printf("enter value of n = ");
    scanf("%d",&num);
     printf("enter value of x = ");
    scanf("%d",&x);

    for(i=1;i<=num;i++)
    {
        if(i==1)
        {  
            sum=1;  
        }
    
        if(i>1)
        {
            factorial*=(i-1);
          //  printf("factorail = %d",factorial);
        power*=x;
       // printf("%d\n",power);
       if(i%2==0)
       {
           sum-=power/(float)factorial;
       }
       else
       {
        sum+=power/(float)factorial;
        //printf("%d\n",sum);
        }
        }
    }
    printf("the sum of gaven series is %f",sum);

}