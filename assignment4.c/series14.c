// series lab
// ((n^2)^n)/(n-1)!
#include<stdio.h>
int main(void)
{
   int num,i,j=1,k,a=1,l;
   long long int sum=0 ,factorial ,fact=0;

   printf("enter any gaven value = ");
   scanf("%d",&num);
   for(l=1;a<=num;l*=3)
   {
       factorial=1;
   for(j=1;j<=l;j++)
   {  
       factorial*=j;
       if(j==l)
       {
       a++;
       }
      // printf("fact%d\n",factorial);
   }
   printf("fact%d\n",factorial);
   }
}