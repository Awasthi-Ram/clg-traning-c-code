// max min 10 input
#include<stdio.h>
int main(void)
{
    int i,j,k=0,max,r;
    int num[10];
    printf("enter any 10 no.=");
    
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    //printf("%d",num[2]);
    for(i=0;i<10;i++)
    {
        //num[i]=r;
        for(j=0;j<10;j++)
        {
         if(num[i]>=num[j])
         {
           // num[i]==num[i];
             k++;
         }
        }
         if(k==10)
         { 
            // max==num[i];
             printf("%d is max",num[i]);
             break;
             //printf("%d is max",max);
         }
        
           // printf("%d is max",num[i]);
        
        
        
    }
    //printf("%i is max",max);
}