// WAP to accept 10 numbers from user and find the maximum and minimum.
#include<stdio.h>
int main(void)
{
    int num,i=1,max=0,min=num,sum=0;
    float avg;
    printf("enter any 10 no. = ");
    while(i<=10)
    {
        scanf("%d",&num);
         // num=max;
         // max=min;
         i++;
        //sum+=num;
        
        if(num>max)
        max=num;
        if(num<=min)
        min=num;
    }
   // avg = sum/(float)10;

    printf("the sum of all 10 no. is = %d\n",sum);
    printf("the maximun no. is %d\n",max);
    printf("the minimum no. is %d\n",min);
   

    
}