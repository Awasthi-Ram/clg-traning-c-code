#include<stdio.h>
int main()
{
    char ch;
    int num;
    double deci;
//printf("enter any character  =  \n");
//scanf("%c",&ch);
printf("enter any integer =  \n");
scanf("%d",&num);
printf("enter any float num =  \n"); //if we are inputing char than gave space before writing %c because system read enter key as input
scanf("%lf",&deci);
printf("enter any character  =  \n");
scanf(" %c",&ch);  
printf("your entered character value is = %c\n",ch);
printf("your entered integer value is = %d\n",num);
printf("your entered float no. value is = %f\n",deci);
    return 0;
}