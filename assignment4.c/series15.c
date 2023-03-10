// series lab
#include<stdio.h>
int main(void)
{
   int num,i,j,k,l,power=1,factorial=1;
  // long long sum=0;
   printf("enter any no.");
   scanf("%d",&num);

  /* for(j=1;j<=num;j++)
   {
       power=1;
       printf("%d\n",j);
       
   for(i=1;i<=j;i++)
   {
       power*=j;
   }
   printf("%d\n",power);
}*/
for(k=1;k<=num;k++)
{
for(l=2;l<=k;l+=2)
{
    factorial=1;
for(i=2;i<=l;i++)
   {
     factorial*=i;
   }
}
}
   printf("%d",factorial);
}
//printf("%d",power);