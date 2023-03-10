//WAP to check the entered number is palindrome or not.
#include<stdio.h>
int main(void)
{
    int num,a,i,m,sum=0,digit=0,reverse=0;
     printf("enter any no.");
    scanf("%d",&num);
    a=num;
    for(i=num;i>0;i/=10)
    {
        digit=i%10;
        reverse=reverse*10+digit;
    
        
        
       // printf("%d",digit);
    }
   // printf("\n%d",reverse);
    if (reverse==a)
    {
        printf("the gaven of is pindrome");
    }
    else 
    {
        printf("the gaven of is not pindrome");
    }
    
}
