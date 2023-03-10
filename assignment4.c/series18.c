// lab series
#include<stdio.h>
int main(void)
{
     long int num,i,j,k,a ,power=1,m=1;
     double sum=0;
    printf("enter any no.=");
    scanf("%d",&num);
    
    
        for(j=1;j<=num;j++)
        {
            power=1;
              for(k=1;k<=m;k++)
              {
                  if(k%2==0)
                  {
                   power*=-j;
                  }
                  else{
                      power*=j;

              }
                  
              }
              m=m+2;
              printf("power %d",power);
        }


     
}
