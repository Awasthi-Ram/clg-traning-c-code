//check whether a character is  vowel or consonant												
#include<stdio.h>
int main(void)
{
    char alphabet;
    int ascii;
    printf("enter any character = ");
    scanf(" %c",&alphabet);
    ascii = ("%d",alphabet);
    if(ascii>=65 && ascii<=90 || ascii>=97 && ascii<=122 )
    {
        //printf("the gaven character is alphabet");
        if(ascii == 97,101,105,111,117,65,69,73,79,85)
        {
            printf("the gaven character is vowel");
        }
        else
        {
            printf("the gaven character is consonant");
        }
    }
    else
    {
        printf("INVALID INPUT / gaven character is not alphabet");   
    }
    
}
