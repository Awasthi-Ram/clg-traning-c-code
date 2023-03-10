// scanf spaces and eleminatioon
#include<stdio.h>
int main()
{
    int i;
scanf("%d%*d",&i);// if you see %*d in scanf f that mean its value got input but after that it got ignore and dont printout
printf("%d",i);
return 0;
}