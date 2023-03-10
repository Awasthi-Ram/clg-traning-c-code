#include<stdio.h>  
 int main()    
{    
long n,sum=0,m;    
printf("Enter a number:");    
scanf("%d",&n);  



while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
  
  
}
printf("Sum is=%d\n",sum);  
 n=sum;
 sum=0;
while (n > 0)
{
      
       m=n%10;    
       sum=sum+m;    
       n=n/10; 
}
printf("Sum is=%d\n",sum); 


    

return 0;  
}
 