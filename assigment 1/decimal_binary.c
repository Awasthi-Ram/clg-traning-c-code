#include<stdio.h>
int main(void)
{
    int num,k,r,b;
   
    b=0;
    printf("enter any decimal no.=");
    scanf("%d",&num);
    for(k=1;num>0;k*=10)
    {
        r=num%2;
        num=num/2;
        //printf("num%d=",num);
        b=b+(r*k);
       
        //i++;
    }
    printf("binary no. is =%d",b);
}