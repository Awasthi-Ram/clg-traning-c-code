#include<stdio.h>
void STRCPY(char num1[100],char num2[100]);
int main(void)
{
    char string1[100],string2[100];
    gets(string1);
    STRCPY(string1,string2);
    printf("%s",string2);
}
void STRCPY(char num1[100] ,char num2[100])
{int i=0;
    while(num1[i]!='\0')
    {
        num2[i] = num1[i];
        i++;
    }num2[i]='\0';
    
}