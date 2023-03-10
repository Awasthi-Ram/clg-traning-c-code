//power 
#include<stdio.h>
int main(void)
{
    int num=0,i,j=1,k;
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        j=j*i;
    }
    printf("%d",j);
}