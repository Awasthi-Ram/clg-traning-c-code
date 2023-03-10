//WAP to accept any number and check whether it is Armstrong or not.
//[ Hint : 153 is an Armstrong no because 1 3 +5 3 +3 3 =153]
#include<stdio.h>
int main(void)
{
    int i,num,sum=0,total,m,power=1,k=0,j,a;
    printf("enter any no.");
    scanf("%d",&num);
    a=num;
    while(num>0)
    {
         m=num%10;
         //power=power*m;
        //printf("%d+",power);
        sum=sum+m*m*m;
        num=num/10;
         
    }
   if(sum==a)
   {
       printf("the gavn no. is armstrong");

   }
   else 
   {
       printf("the gaven no. is not armstrong");
   }
    //printf("%d",sum);
}
