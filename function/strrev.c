#include<stdio.h>

int main (void)
{
    char a[5];
    scanf("%s",a);
    for(int i=0,j=strlen(a)-1;i<strlen(a)/2;i++,j++)
    {
        a[i]=a[i] + a[j];
        a[j] = a[i] -a[j];
        a[i] = a[i] - a[j];
    }
}