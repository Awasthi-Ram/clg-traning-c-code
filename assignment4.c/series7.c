// 1+x+x^2/2....
#include<stdio.h>
int main(void)
{
    int num,i,/*sum=0,*/power=1,x;
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
            //power*=x;
            //sum+=power/(float)i;
            
        }
        
            
           
        
        if(i>1)
        {
        power*=x;
        //printf("%d\n",power);
        sum+=power/(float)(i-1);
        //printf("%d\n",sum);
        }
    }
    printf("the sum of gaven series is %f",sum);

}