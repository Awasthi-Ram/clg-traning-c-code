// count the no. of digit
#include<stdio.h>
int main(void)
{
    int i,num,digit=1;
    printf("enter any no. =");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        num=num/10;
    }
    printf("the total no. of digit is =%d",i);
}