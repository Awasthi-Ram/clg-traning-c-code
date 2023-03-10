//1+1/2+1/3+.........
#include<stdio.h>
int main(void)
{
   int num,i;
   float sum=0;
   printf("enter any no.");
   scanf("%d",&num);

   for(i=1;i<=num;i++)
   {
       sum=sum+(1/(float)i);
   }
   printf("the sum of gaven series is %.4f",sum);
}