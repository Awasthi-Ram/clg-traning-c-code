//WAP to perform addition subtraction multiplication and division using different format specifiers						
#include <stdio.h>
int main (void)
{
    long double a,b;
    char opt;
    printf("enter a num ");
    fflush(stdin);
    scanf("%Lf",&a);
    printf("operation that you want to perform (+,-,*,/) = ");
    fflush(stdin);
    scanf(" %c",&opt);
    printf("enter a sencond no.num ");
    fflush(stdin);
    scanf("%Lf",&b);
    if(opt == '+')
    {
         fflush(stdout);
         printf("the sum of gaven two no is = %5.2Lf ",a+b);
    }
    else if(opt == '-')
    {    
         fflush(stdout);
         printf("the subtraction of gaven two no is = %5.2Lf ",a-b);
    }
     else if(opt == '*')
    {
         fflush(stdout);
         printf("the multiplication of gaven two no is = %5.2Lf ",a*b);
    }
     else if(opt =='/')
    {
         fflush(stdout);
         printf("the division of gaven two no is = %5.2Lf ",a/b);
    }
    else
    {
         fflush(stdout);
        printf("INVAILD");
    }
}