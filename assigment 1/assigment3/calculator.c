#include<stdio.h>
int main(void)
{
    double a,b,i;
    char opt;
    printf("calculator:\n");
    scanf("%lf %c%lf",&a,&opt,&b);
    
    switch(opt)
    {
    case '+':printf("=%.2lf%.2lf",a+b);break;
    case '-':printf("=%.2lf%.2lf",a-b);break;
    case '*':printf("=%.2lf%.2lf",a*b);break;
    case '/':printf("=%.2lf%.2lf",a/b);break;
    default:printf("INVALID OPERATION");
    }
}