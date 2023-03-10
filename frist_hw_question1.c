#include <stdio.h>
int main()
{ //declaring variable
    int i;
    float f;
    char ch;
    // character input
    printf("enter any character = ");
    scanf("%c", &ch);
    //integer input
    printf("enter any integer num  = ");
    scanf("%d", &i);
    //float input
   printf("enter any decimal num = ");
   scanf("%f", &f);
   //outputs
    printf("entered is character = %c\n", ch);
    printf("entered integer is = %d\n", i);
    printf("entered is float = %f\n", f);
    
    return 0;
}