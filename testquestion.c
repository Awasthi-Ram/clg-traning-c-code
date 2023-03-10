#include <stdio.h>
int main()
{
    short num ;
    double deci ;
    char a ;
    printf("enter any integer value = \n") ;
    scanf("%d", &num) ;
    printf("enter any double value = \n") ;
    scanf("%lf", &deci) ;
    printf("enter any char value = \n") ;
    scanf(" %c", &a) ;
    printf("your integer value is = %5d \n double value = %lf and \n your charter value = %c", num, deci, a) ;
    return 0 ;
}