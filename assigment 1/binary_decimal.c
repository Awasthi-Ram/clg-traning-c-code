//binary to decimal
#include<stdio.h>
int main(void)
{
    int num,i,k,r,d,a;
    scanf("%d",&num);
    k=1;
    d=0;
    a=1;
    for(i=num;i>0;i/=10)
    {
       
       
           r=num%10;
           num=num/10;
           
           a=a*2;
           if(k==1)
           {
              
              a=1;
           }
           
           d=d +(r*a);
           k++;
          // printf("\n%dand%dor%d ",num,k,d);
       
       
      
       
       
    }
     printf("\ndecimal form of gaven no.is %d ",d);
}
