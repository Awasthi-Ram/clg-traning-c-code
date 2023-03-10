#include<stdio.h>
int main(void)
{
    int i,j;
    printf("enter any no.");
    scanf("%d",&i);
    for(j=2;j<=10;j++)
    {
    if (i%j!=0)
    {
        printf("remainder 0f %d=%d\n",j,i%j);
    }
    if(i%j==0)
    {
        printf("no. is divisible by  %d =%d\n",j,i/j);

    }
    }
}