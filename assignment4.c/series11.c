
#include<stdio.h>
int main(void)
{
    int num,i,power,x,factorial=1,k=1,j,s=0;
    float sum=0;
    printf("enter value of n = ");
    scanf("%d",&num);
     printf("enter value of x = ");
    scanf("%d",&x);
    power=x;
    for(i=1;i<=num;i++)
    {
        
        if(i==1)
        {  
            sum=1;  
        }
         k=k*i;
         
         //for()
        if(i>1)
        {
    
        
             factorial*=(2*i-1);
            
          //  printf("factorail = %d",factorial);
            
             power*=power*x;
       // printf("%d\n",power);
      
              sum+=power/(float)factorial;
        //printf("%d\n",sum);
        
        }
    }
    printf("the sum of gaven series is %f",sum);

}