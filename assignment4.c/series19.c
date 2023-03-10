//lab series 2
#include<stdio.h>

int main (void)
{
    long int num,i,j,k,l, power=1,factorial,a=1,m=2, b=1,n,o=1,p=2,q=1,fact;
    double sum=0;
     
     printf("enter any value = ");
     scanf("%d",&num);
    
     
    for(i=1;i<=num;i++)
    {
        power=1;
        factorial=1;
        fact=1;
       
           
        for(j=1;j<=m;j++)
        { 
            power*=a;
            
        }
          a+=2;
          m+=2;
       
        for(k=1;k<=p;k++)
            {
               factorial*=k;
            }
        p*=2;
        for(l=1;l<=o;l++)
           {
               fact*=factorial;
           }
           o*=2;
           
          // printf("factorial =%d\n",fact);
           if(i%2!=0)
           {
           sum=sum+(float)power/(float)fact;
           }
           else
           {
              sum=sum-(float)power/(float)fact; 
           }
           printf("sum= %lf\n",sum);
    }

   
  
}
 


