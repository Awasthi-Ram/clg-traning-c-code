#include<stdio.h>
int main()
{
    char c;
int lower_case,upper_case;
printf("enter any alphabet: ");
scanf("%c",&c);
lower_case=( c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u');
upper_case=( c == 'A'|| c == 'E' || c == 'I' || c == 'O' || c == 'U');
if(upper_case || lower_case)
printf("%c is a vowel",c);
else 
printf("%c is a consonant",c);
return 0;
}