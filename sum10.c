//WAP to display the sum of first 10 positive integers.
#include<stdio.h>
int main(void)
{
    int i=1,j=0;

    while(i<=10)
    {
        j=j+i;
        i++;
    }
    printf(" the sum of frist 10 positive integer is = %d",j);
}