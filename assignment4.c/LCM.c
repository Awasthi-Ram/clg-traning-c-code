//WAP to find the LCM of has given two numbers.
#include<stdio.h>
int main(void)
{
    int num1,num2,i=1,max=0,min=0,lcm;
    printf("enter any two num = ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
        max=num1;
        min=num2;
    }
    else{
        max=num2;
        min=num2;
    }
     printf("%d\n",max);
    while(i!=0)
    {
        
    
            i=max%min;
            max=min;
            min=i;
            
    }
    
        lcm=(num1*num2)/max;
    
   // printf("HCF of two gaven no. is %d",max);
   printf(" the lcf of two gaven of is %d ",lcm);
}