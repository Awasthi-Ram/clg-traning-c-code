/*Write a program that accepts a sequence of non-negative integers, entered
one per line by a user. Compute the maximum and minimum values entered,
along with the average and the count of values entered. The user will end the
sequence by typing -1 that is not part of the sequence. After reading all the
numbers your program must print the following five messages (assuming the
four values are MAX, MIN, AVERAGE, and COUNT). Let Your City be your
home town. Choose appropriate variable types.[ Note : Precision of
AVERAGE is 2 digit after decimal point , Your City is fixed as Chennai ]

Report from the city of YourCity.
COUNT health centres submitted data on cases.
The maximum number reported in any centre is MAX.
The minimum number reported in any centre is MIN.
The average number of patients admitted in a centre is AVERAGE.*/
#include<stdio.h>
#include<string.h>
int main(void)
{
     int num,i=1;
     double sum=0;
    int max=0,min=num,a=0;
    do
    {
        printf("COUNT health centres submitted data on cases. of city %d is",i);
        scanf("%d",&num);// getting input
        if(num!=-1)
        sum=sum + num;//storing and adding value
        
        if(num>=max &&max!=-1)//finding max
        {
            max=num;
        }
        if(min>num && a!=0 && num!=-1)// finding min
        {
            min=num;
        }
        a++;//counting variable
        i++;
    } while (num!=-1);
    printf("min=%d\tmax=%d\taverage=%.2f\t total no. of cityes %d",min,max,sum/a,a);//printout result
}