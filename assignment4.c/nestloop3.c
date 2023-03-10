//WAP to display following pattern on the screen using Nested Loop.
#include<stdio.h>
int main(void)
{
    int num,i,j;
    printf("enter any no.= ");
    scanf("%d",&num);
    
    for(i=0;i<num;i++)
    {
        for(j=num-i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
        
    }
}