// 1/2+2/3+3/4+.......
#include<stdio.h>
int main(void)
{
    int num,i;
    float sum=0;
    printf("enter any no.");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        sum=sum + (float)i/(float)(i+1);
    }
    printf("the sum of gaven series is %.4f",sum);
}