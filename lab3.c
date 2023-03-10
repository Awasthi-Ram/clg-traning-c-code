#include<stdio.h>
int main()
{
    int a,b,c;
printf("enter 1st no. =  ");
scanf("%d",&a);
printf("enter 2nd no. =  ");
scanf("%d",&b);
printf("enter 3rd no. =  ");
scanf("%d",&c);    

if (a>b && a>b)
{
    printf("the biggest no. is %d",a);
}

 if(b>a && b>c)
{
    printf("the biggest no. is %d",b);
}

if(c>a && c>b)
{
    printf("the biggest no. is %d",c);
}

return 0;
}