//WAP to display following pattern on the screen using Nested Loop.
#include<stdio.h>
int main(void)
{
    int num,i,j,k;
    printf("enter any no.= ");
    scanf("%d",&num);
    num++;
    for(i=0;i<num;i++)
    {
        for(j=1;j<num-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}