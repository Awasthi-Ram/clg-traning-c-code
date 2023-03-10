//WAP to perform addition subtraction multiplication and division using different format specifiers						
#include <stdio.h>
int main (void)
{
    double a,b;
    char opt;
    printf("enter a num ");
    scanf("%lf",&a);
    printf("operation that you want to perform (+,-,*,/) = ");
    scanf(" %c",&opt);
    printf("enter a sencond no.num ");
    scanf("%lf",&b);
    if(opt == '+')
    {
         printf("the sum of gaven two no is = %.2lf ",a+b);
    }
     else if(opt == '-')
    {    
         printf("the subtraction of gaven two no is = %.2lf ",a-b);
    }
     else if(opt == '*')
    {
         printf("the multiplication of gaven two no is = %.2lf ",a*b);
    }
     else if(opt =='/')
    {
         printf("the division of gaven two no is = %.2lf ",a/b);
    }
    else
    {
        printf("INVAILD");
    }
   
}