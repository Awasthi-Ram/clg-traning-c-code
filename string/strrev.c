#include<stdio.h>
#include<string.h>
void STRREV(char a[1000]);
int main(void)
{
    char a[1000];
    printf("enter string");
    gets(a);
    STRREV(a);
    printf("%s",a);
}
void STRREV(char a[1000])
{
    for(int i=0, j=strlen(a)-1;i<strlen(a)/2;j++,i++)
    {
        a[i] = a[i] +a[j];
        a[j]= a[i] - a[j];
        a[i] = a[i] - a[j];
    }
}