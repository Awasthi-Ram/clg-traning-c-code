#include <stdio.h>
int main()
{
    char ch1, ch2;
    float deci1, deci2;
    long double Ldeci3;
    printf("enter any 2 character = \n");
    scanf("%c\n%c", &ch1, &ch2);
    printf("enter any 2 float num = \n");
    scanf("%f\n%f", &deci1, &deci2);
    printf("enter any long float num = \n");
    scanf("%Lf", &Ldeci3);
    printf("your entered character value is %c and %c\n", ch1, ch2);
    printf("your entered float num value is %f and %f\n", deci1, deci2);
    printf("your entered long float no. value is %Lf", Ldeci3);

    return 0;
}