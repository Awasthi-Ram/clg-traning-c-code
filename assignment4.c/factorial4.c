//WAP to calculate the factorial of any number using function.
#include<stdio.h>
int main(void)
{
    int num,i,fac=1;
    printf("enter any no.= ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        fac=fac*i;
    }
    printf("the factprial of gaven no. is = %d",fac);

}