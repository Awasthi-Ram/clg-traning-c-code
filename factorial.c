//factorial
#include<stdio.h>
int main(void)
{
    int num,i,k=1;
    printf("enter any no.=");
    scanf("%d",&num);
    for (i=0;i<num;i++)
    {
        k=k*(num-i);
       
    }
     printf("%d\n",k);
}