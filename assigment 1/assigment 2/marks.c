/*Enter marks of 5 subjects, calculate percentage (%) and categorize students accordingly:                            						
percentage>=80 and <=100 ------->Merit						
percentage>=60 and <=79 ------->1st division						
percentage>=50 and <=59------->2st division						
percentage>=40 and <=49 ------->3st division						
Fail*/
#include<stdio.h>
int main(void)
{
    int mat,sci,hin,eng,com,percentage;
    printf("enter your math marks =");
    scanf("%d",&mat);
    printf("enter your marks =");
    scanf("%d",&sci);
    printf("enter your marks =");
    scanf("%d",&hin); 
    printf("enter your marks =");
    scanf("%d",&eng);
    printf("enter your marks =");
    scanf("%d",&com);
    percentage = (mat+sci+hin+eng+com) / 5;
    printf("you have scored %d\n",percentage);
    if (percentage >= 80 && percentage <= 100)
    {
        printf("merit");
    }
    else if (percentage>=60 && percentage <=79)
    {
        printf("1st division");
    }
    else if(percentage>=50 && percentage <=59)
    {
        printf("2nd division");
    }
    else if(percentage>=40 && percentage <=49)
    {
        printf("3rd division");
    }
    else if(percentage<40 && percentage <=0 )
    {
        printf("FAIL");
    }else
    {
        printf("incorrect entered marks");
    }


}						