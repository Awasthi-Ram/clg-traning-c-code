//WAP to find the HCF of has given two numbers.
#include<stdio.h>
int main(void)
{
    int num1,num2,i=1,max=0,min=0;
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
    
        
    
    printf("HCF of two gaven no. is %d",max);
}