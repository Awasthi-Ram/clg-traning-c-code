#include<stdio.h>
int main(void)
{
    int num,i,n;
    int *p=&num,*q=&i,*r=&n;
    printf("enter how many no. you want to enter ");
    scanf("%d",&*r);
    for(*q=1;*q<=*r;(*q)++)
    {
        printf("enter any no.");
        scanf("%d",&*p);
        if(*p%2==0)
        {
            printf("the gave no. is even \n");
        }
        else {
            printf("the gaven no. is obb\n");
        }
    }
}