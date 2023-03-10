#include<stdio.h>
int main(void)
{
    int num1[10],num2[5],num3[5],num4[10];
    int i,j=0,k=0,l;
    for(i=0;i<10;i++)
    {
        printf("enter %d element",i);
        scanf("%d",&num1[i]);
    }
    for(i=0;i<10;i++)
    {
        if(num1[i]%2==0)
        {
        num2[j]=num1[i];
        j++;
        }
        else{
            num3[k]=num1[i];
            k++;
        }
    
    }
    for(i=0;i<10;i++)
    {
        if(i<=j)
        {
            num4[i]=num2[i];
        }
        else{
            num4[i]=num3[i-j];
        }

      
    }
    for ( i = 0; i < 10; i++)
    {
        printf("element %d = %d  %d  %d\n",i,num4[i],num2[i],num1[i]);
    }
    

}