// calculate the x power  y
#include<stdio.h>
int main(void)
{
    int x,y,i,power=1;
    printf(" enter the value of x and y :");
    scanf("%d%d",&x,&y);
    //for(i=1;i<=y;i++)
    
    for(i=1;i<=y;i++)
    {
        
        power=power*x;

       // printf("%d",power);
    }
    
    printf("%d",power);
}