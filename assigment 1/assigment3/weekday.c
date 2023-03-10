//WAP to read weekday number and print weekday name						
#include<stdio.h>
int main(void)
{
    int weekdays_number;
    printf("enter weekdays number : ");
    scanf("%d",&weekdays_number);
    switch(weekdays_number)
    {
      case 1: printf("Sunday\n");break;
      case 2: printf("Monday\n");break;
      case 3: printf("Tuesday\n");break;
      case 4: printf("Wednesday\n");break;
      case 5: printf("Thursday\n");break;
      case 6: printf("Friday\n");break;
      case 7: printf(" Saturday\n");break;
      default: printf("INVALID INPUT\n");break;
    }
}