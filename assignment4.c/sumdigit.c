//WAP to accept any number and display the sum of its each digit.
#include<stdio.h>
int main(void)
{
    int num,i,j,sum=0,rem=1;
    printf("enter any no.");
    scanf("%d",&num);

    
    for(i=num;i>0;i/=10)
    {
        rem=i%10;
        sum=sum+rem;
         //printf("sum of all digit is = %d\n",sum);
    }
    printf("sum of all digit is = %d\n",sum);
     
    }