
#include<stdio.h>
int main(void)
{
    int num,i,x=1,factorial=1,j,h=1, a=1,l,m,power2,b=1;
    long long int sum=0 ,s=0,k=1,result;

    printf("enter any no. = ");
    scanf("%d",&num);
     //printf("enter value of x = ");
    //scanf("%d",&x);
   // power=1;
    for(i=1;i<=num;i++)
{       
        for(l=1;a<=num;l*=3)
   {
       factorial=1;
       power2=1;
       
       
   for(j=1;j<=l;j++)
   {   
       factorial*=j;
       if(factorial%4==0 && factorial==2)
       {
           a++;
       }
   }
   //printf("%d",factorial);
      
   }
   
   for(m=1;m<=(l*2);m++)
   {
       
   
       power2=1;
       printf("power%d\n",power2);
      // b=3;
   if(m==1)
   {
       a++;
   }
   
   else
   {
       
       
       power2=power2*(b);
      //power2=power2*(l-1);
      printf("fact%d\n",power2);
   }
   } b+=2;
   
   printf("\n");
   s=s+(power2/(float)factorial);
   }
   //sum+=s;
   printf("power %d factorial%d sum %d\n",power2,factorial,s);
  printf("result=%d",sum);
}

  


//printf("result=%d",sum);
        //factorial*=x;
         // x=2*i;
         /* printf("fact=%d",factorial);
        
        printf("power =%d\n",power2);
    
        for(j=1;j<=power2;j+=2)
        {
            for(h=1;h<=power2;h++)
            {
            k*=j;
            }
            s=s+(float)((k)/(factorial));
            printf("s =%d\n",s);
        }
        sum=sum+s;
            printf("sum=%ld\n",sum);
    }
   // sum=sum+s;
            printf("sum=%ld\n",sum);
        
    
   // printf("sum=%d",sum);
}
    /* for(power=2;power<=power2;power*=2)
     {
      
         
     }
    }
        if(i==1)
        {  
            sum=1;  
        }
    
        if(i>1)
        {
    
        
             factorial*=(2*i-1);
            
          //  printf("factorail = %d",factorial);
            
             power*=power*x;
       // printf("%d\n",power);
      
              sum+=power/(float)factorial;
        //printf("%d\n",sum);
        
        }
    }
    printf("the sum of gaven series is %f",sum);

}*/