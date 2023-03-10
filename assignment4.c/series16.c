// series lab
#include<stdio.h>
int main(void)
{
   int num,i,j,k,power=1;
   long long sum=0;
   printf("enter any no.");
   scanf("%d",num);

   for(j=1;j<=num;j++)
   {
       printf("%d\n",j);
   for(i=1;i<=j;i*3)
   {
       power*=j;
   }
   printf("%d\n",power);
}
}
//printf("%d",power);