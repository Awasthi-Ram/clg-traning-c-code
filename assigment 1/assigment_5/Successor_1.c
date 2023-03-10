//&lt;Number&gt;&lt;Space&gt;&lt;1st Successor&gt;...&lt;Space&gt;&lt;9thSuccessor&gt;
#include<stdio.h>
int main(void)
{
    int num,i;
    printf("enter any no.");
    scanf("%d",&num);//asking value of num
    i=1;
    while(i<=10)//loop to print num and its successor
    {
        printf("%d\t",num);
        i++;
        num++;//increasing value of num in loop

    }
}