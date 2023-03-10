//WAP to read gender (M/F) and print corresponding gender name						
#include<stdio.h>
int main(void)
{
    char gender;
    printf("enter your gender M/F :");
    scanf("%c",&gender);
    switch (gender)
    {
    case 'M':
        printf("Male");
        break;
    case 'F':
        printf("Female");
        break;
    case 'm':
        printf("Male");
        break;
    case 'f':
        printf("Female");
        break;    
    default:
        printf("please enter M/F ONLY");
        break;
    }
}