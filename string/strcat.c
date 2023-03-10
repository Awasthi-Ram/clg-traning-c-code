#include<stdio.h>
#include<string.h>
void STRCAT(char x[1000],char y[1000]);
int main(void)
{
    char a[1000],b[1000];
    gets(a);
    gets(b);
    STRCAT(a,b);
    printf("%s",a);
}
void STRCAT(char x[1000],char y[1000])
{int i,q;
  for(  i = strlen(x), q=0;q<=strlen(y);i++,q++)
  {
      x[i]=y[q];
  }
  x[i]='\0';
}
