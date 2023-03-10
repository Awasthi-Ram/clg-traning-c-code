//WAP to display the sum of all even numbers between 1 to 100.
#include<stdio.h>
int main(void)
{
    int i=2,k=0;

    while(i<=100)
    {
        k=k+i;
        i+=2;
    }
        printf("the sum odf all even number between 1 to 100 = %d",k);
}