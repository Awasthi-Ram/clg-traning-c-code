#include<stdio.h>
int main(void)
{
    int num,k,r,b;
   
    b=0;
    printf("enter any decimal no.=");
    scanf("%d",&num);
    for(k=1;num>0;k*=10)
    {
        r=num%16;
        num=num/16;
        if(r<10)
        {
            r=r+48;
        }else
        {
            r=r+55;
        }
        printf("%c",r);
        //printf("num%d=",num);
        //b=b+(r*k);
       
        //i++;
    }
   // printf("OCTAL no. is =%d",b);
}