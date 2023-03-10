//WAP to display following pattern on the screen using Nested Loop.
#include<stdio.h>
int main(void)
{
    int num,i,j;
    printf("enter any no.= ");
    scanf("%d",&num);
    
    for(i=0;i<num;i+=2)
    {
        for(j=0;j<=i;j++)
        {
             printf(" ");
        }
        for(j=(num -1)-i;j>=0;j--)
        {
           
            printf("* ");
        }
        
        printf("\n");
        
    }
}