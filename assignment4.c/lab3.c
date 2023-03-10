//lab 3
#include<stdio.h>
int main(void)
{
    int num,i,sum=0,a=1,j,sum1=0,sum2,k;
    printf("enter any no. ");
    scanf("%d",&num);
      
      for(i=1;i<=num*2;i+=2)
      {
          a++;
          if(a%2!=0)
          {
              sum+=i;
            a++;
          }
          else{
              sum-=i;
              a++;
          }
          printf("%d\n",sum);
      }
      printf("%d\n",sum);

    /*for(k=1;k<=num;k++)
    {
    for(i=1;i<=k;i+=4)
    {
       printf("%d",i);
        sum+=i;
        
    }
    for(j=3;j<=k;j+=4)
    {
        sum1=j;
    }
    }
    sum2=sum-sum1;
    printf("SUM %d",sum2);*/
}
