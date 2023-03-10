#include<stdio.h>
void STRLEN (char a[100]);
int main()
{
    char string [100];
    gets(string);
    STRLEN(string);
}
void STRLEN (char a[100])
{   int i;
    for( i=0;a[i]!='\0';i++);
    printf("length of string is %d",i);
}