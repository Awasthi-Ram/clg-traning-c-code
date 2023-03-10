// print the table of a gaven no.
#include<stdio.h>
int main(void)
{
    int num,i;
    printf("enter any gaven no. = \n");
    scanf("%d",&num);

    for(i=1;i<=10;i++)
    {
        printf("%d * %d =%d\n",num,i,num*i);
    }

}