//Write a program in C to display the multiplication table of a given integer.
#include<stdio.h>
int main(void)
{
    int i,num;
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }

}
