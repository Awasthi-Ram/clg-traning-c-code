//Programs to find roots of a Quadratic Equation						
#include<stdio.h>
#include <math.h>
int main(void)
{
    int a,b,c;
    printf("stander form of quadratic equation ax^2 +Bx +c ");
    printf("gave the input of a than b than c");
    scanf("%d%d%d",&a,&b,&c);
    printf(" roots of are %d ,%d",((-b+pow(b*b-4*a*c,0.5))/2*a));
}