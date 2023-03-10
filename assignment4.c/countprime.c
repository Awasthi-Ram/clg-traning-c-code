//WAP to display and count the all prime numbers between 1 to n.
#include<stdio.h>
int main(void)
{
   int num,i,prime=0,k,j;
   printf("upto to how much you want to print prime no. = ");
   scanf("%d",&num);
   
   for(i=1;i<=num;i++)
   {
      k=0;
      for(j=2;j<i;j++)
      {
        
      if(i%j==0 )
      {
        k++;
      // printf("%d is not prime\n",i) ;
        //printf("%d\t%d\n",i,j);
      } 
      
      
       
       
      }
      if(k<=0)
      {
         printf("%d\t",i);
         prime++;
      }

     
      
   }
   printf("total no. of prime between 1 to %d is = %d ",num,prime);
}