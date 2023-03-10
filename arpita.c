#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
float j,k;
long double l;
char m,n;
printf("\n enter two float ,one long double and two char ");
scanf("%f%f%Lf %c %c",&j,&k,&l,&m,&n);
printf("\n two float entered %f and %f ",j,k);
printf("\n one long double entered: %Lf",l);
printf("\n two char enterd : %c and %c",m,n);
}