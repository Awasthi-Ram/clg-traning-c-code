// calculate the factorial of a gaven number
#include<stdio.h>
int main(void)
{
    int num,i,factorial=1;
    printf("enter any no.");
    scanf("%d",&num);

    
    
        for(i=1;i<=num;i++)
        {
        printf("%d",i);
        factorial=factorial*i;
        }
    
    //printf("%d",num*num);
    printf("=%d",factorial);
}