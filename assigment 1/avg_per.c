//WAP to calculate average and percentage of user defined numbers
#include<stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float avg,per;
    printf(" Enter any five no. between (1 to 100) : \n");
    scanf(" %d %d %d %d %d",&a,&b,&c,&d,&e);
    total = a+b+c+d+e;
    avg=(total)/5;
    printf("Average = %.2f\n",avg);
    per=(((total)*100)/500);
    printf("Percentage = %.2f",per);
    return 0;

}