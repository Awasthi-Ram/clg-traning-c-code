// to find the factorial upto 5
#include<stdio.h>
int main(void)
{
    int i,j,k,l;
    l=0;
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=i;j++)
        {
            k=k*j;
        }   
        l=l+k;
            
        
    }
    printf("sum of factorial from 1 to 5  %d",l);
}