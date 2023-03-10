/*WAP for multiplication table generation. (Output should be on following
format)
[ Hint : Enter No. : 6 ;
Output : 6x1=6
6 x2=12 ,
…”…”}*/
#include<stdio.h>
int main(void)
{
    int num,i=1;
    printf("enter no. whose table you want to print = ");
    scanf("%d",&num);

    while(i<=10)
    {
        printf("%d*%d=%d\n",num,i,num*i);
        i++;
    }
}