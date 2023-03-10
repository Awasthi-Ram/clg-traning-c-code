//Write a program in C to display the cube of the number upto given an integer.
#include<stdio.h>
int main(void)
{
    int i,cube=1,num;
    scanf("%d",&num);
    for(i=1;i<=3;i++)
    {
        cube=cube*num;
    }
    printf("%d",cube);
}