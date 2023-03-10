//Check whether a character is an alphabet or not						
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
        printf("the gaven character is alphabet");
    }
    else
    {
        printf("INVALID INPUT / gaven character is not alphabet");   
    }
    
}
