//lab series question
#include<stdio.h>
int main(void)
{
    unsigned long int num,i,j,k,l,m=1,power=1,a=2,factorial=1;
     // double num,i,j,k,l,m=1,power=1,a=0,factorial=1;
    double s=0;
    printf("enter any no.");
    scanf("%d",&num);

   for(i=1;i<=num;i++)
    {
        
        //for(j=1;j<=i;j=m)
        
            power=1;
            //printf("%d\n",j);
            for(k=1;k<=m;k++)
            {
                power*=i;
                
            }
            m*=3;
             
             printf("%lu\n",power);
             factorial=1;
             for(j=1;j<=a;j++)
             {
                  factorial*=j;
             }
             a*=2;
             printf(" fact %ld\n",factorial);
         s+=((float)power)/((float)factorial);
            
        
    }
    printf("the sum of gaven series is = %lf\n",s);
    
}