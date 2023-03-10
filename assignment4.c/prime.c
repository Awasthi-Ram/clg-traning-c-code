//WAP to check entered number is prime or not
#include<stdio.h>
int main(void)
{
   int num,i,k=0;
   printf("enter any no.");
   scanf("%d",&num);

   for(i=2;i<num;i++)
   {
       if(num%i==0)
       {
           k++;
       }
       
   }
   if(k>0)
   {
       printf("the gaven no is not prime\n");
   }
   else
   {
       printf("the gaven no. is prime\n");
   }
}