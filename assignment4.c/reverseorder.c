//WAP to accept any number and print in reverse order.
#include<stdio.h>
int main(void)
{
    int num,i,digit,reverse=0,k=0,j,l=1;
    printf("enter any no.");
    scanf("%d",&num);

    for(i=num;i>0;i/=10)
    {
        digit=i%10;
        reverse=reverse*10+digit;
    
        
        
       // printf("%d",digit);
    }
   
    printf("%d",reverse);
}