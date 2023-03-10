#include<stdio.h>
int main()
{
    int m1,m2,m3,percent;
char name[100];
printf("enter marks of english out of 100 =  \n");
scanf("%d",&m1);
printf("enter marks of hindi out of 100 =  \n");
scanf("%d",&m2);
printf("enter marks of maths out of 100 =  \n");
scanf("%d",&m3);
printf("enter your name? ");
scanf("%s",&name);
percent=(m1+m2+m3)*100/300;
printf("\n the percent of %s is %d",name ,percent);
if(percent>=80)
printf("\n frist Division");
if(percent>=60  && percent<=79)
printf("\n second Divsion");
if(percent>=50 && percent<=59)
printf("\n third Divsion");
if(percent>=40 && percent<=49)
printf("\n fourth Divsion");
if(percent<=39)
printf("\n fail");
return 0;
}