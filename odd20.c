//WAP to display first 20 odd numbers.
#include<stdio.h>
int main(void)
{
    int i=1,j=1;
    
    while(i<=20)
    {
        printf("%d\n",j);
        j+=2;
        i++;
    }
}